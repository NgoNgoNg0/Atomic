#include "BallManager.h"

#include "Ball.h"

#include "Framework/SceneManager.h"
#include "Framework/Graphics.h"
#include "Framework/Mouse.h"
#include "Framework/Color.h"
#include "Framework/Rect.h"
#include "Framework/Vector2.h"
#include "Framework/ResourceManager.h"
#include "Framework/Texture.h"
#include "Framework/Font.h"
#include "Framework/AudioClip.h"
#include "Framework/Button.h"
#include "Framework/Timer.h"
#include "Framework/Time.h"

#include "TitleScene.h"
#include "Pipette.h"

#include <random>
#include <numeric>
#include <cmath>
#include <vector>
#include <algorithm>
#include <memory>

void BallManager::Initialize()
{
	ResourceManager<Texture>::Register("Line", "Assets/Image/DottedLine.png");
	ResourceManager<Font>::Register("Score", "Assets/Fonts/HGRPP1.TTC", Graphics::GetWindowSize(14 / 108.f).y);
	ResourceManager<AudioClip>::Register("AddSound", "Assets/Sounds/AddSound.mp3");
	ResourceManager<AudioClip>::Register("CollisionSound", "Assets/Sounds/CollisionSound.mp3");
	ResourceManager<AudioClip>::Register("AntiCollisionSound", "Assets/Sounds/AntiCollisionSound.mp3");
	ResourceManager<AudioClip>::Register("ChangeBallSound", "Assets/Sounds/ChangeBallSound.mp3");
	ResourceManager<AudioSource>::Register("SE");
    ResourceManager<Button>::Register("ChangeBox", "Assets/Image/ChangeBox.png", "Assets/Image/ChangeBox.png", Rect{Graphics::GetWindowSize(0.61f).x, Graphics::GetWindowSize(0.57f).y, Graphics::GetWindowSize(0.18f).x, Graphics::GetWindowSize(0.3f).y });
    ResourceManager<Timer>::Register("BallDelay", 0.4f);

	m_gravity = Graphics::GetWindowSize(1.0f / 5400.0f).y;
	m_box = Rect{ Graphics::GetWindowSize(0.05f).x * 2.06f, Graphics::GetWindowSize(0.2f).y, Graphics::GetWindowSize(0.6f).x * 0.975f - Graphics::GetWindowSize(0.05f).x * 2.06f, Graphics::GetWindowSize(1.0f).y * 0.97f - Graphics::GetWindowSize(0.2f).y };
	m_pipette = Pipette(m_box);
	m_score = 0;
	m_isGameOver = false;

	static std::mt19937 rng{ std::random_device{}() };
	std::uniform_int_distribution<int> dist(1, 8);
	int value = dist(rng);
	m_nextBall = Ball(Vector2{ Mouse::GetPos().x, Graphics::GetWindowSize(0.2f).y }, StatusOf(value));
	m_predictionBall = Ball(Vector2{ Graphics::GetWindowSize(0.889f).x, Graphics::GetWindowSize(0.737f).y }, StatusOf(kNone));
	m_exchangeBall = Ball(Vector2{ Graphics::GetWindowSize(0.699f).x, Graphics::GetWindowSize(0.737f).y }, StatusOf(kNone));
	m_balls.clear();

}

void BallManager::Update()
{
    ResourceManager<Button>::Get("ChangeBox").Update();
    ResourceManager<Timer>::Get("BallDelay").Update();
	const float moveLimit = Graphics::GetWindowSize(5.0f / 108.0f).y;
	const float clampedX = std::min(m_box.x + m_box.width - moveLimit, std::max(m_box.x + moveLimit, static_cast<float>(Mouse::GetPos().x)));
	m_nextBall.SetPosition(Vector2{ clampedX, Graphics::GetWindowSize(0.2f).y });
    if (Mouse::GetButtonUp(MouseButton::Left) && !ResourceManager<Button>::Get("ChangeBox").isMouseClicked() && !ResourceManager<Timer>::Get("BallDelay").IsRunning())
    {
        ResourceManager<Timer>::Get("BallDelay").Start(0.4f);
        AddBall();
    }
	m_pipette.Update();

	if (ResourceManager<Button>::Get("ChangeBox").isMouseClicked())
	{
		ResourceManager<AudioSource>::Get("SE").SetClip(ResourceManager<AudioClip>::Get("ChangeBallSound"));
		ResourceManager<AudioSource>::Get("SE").Play(0);
		const AtomicStatus nowStatus = m_nextBall.GetStatus();
		Vector2 nowPos = m_exchangeBall.GetPosition();

		m_nextBall = Ball(m_nextBall.GetPosition(), m_exchangeBall.GetStatus());
		m_exchangeBall = Ball(nowPos, nowStatus);

		if (m_nextBall.GetID() == kNone)
		{
			static std::mt19937 rn{ std::random_device{}() };
			std::uniform_int_distribution<int> dis(1, 8);
			int value = dis(rn);
			m_nextBall = Ball(m_nextBall.GetPosition(), StatusOf(value));
		}
		m_exchangeBall.SetRadius(Graphics::GetWindowSize(0.09f).y);
	}

	CheckPipetteUnderBalls();
}

void BallManager::ResetInterpolation()
{
	for (auto& b : m_balls) b.ResetInterpolation();
}

void BallManager::FixedUpdate()
{
	static std::random_device rd;
	static std::mt19937 rng(rd());

	for (auto& b : m_balls) b.Update();
	for (auto& b : m_balls) b.AddVelocity(Vector2{ 0, m_gravity * kGravityPerStep });

	for (int iter = 0; iter < 30; ++iter)
	{
		const int n = static_cast<int>(m_balls.size());
		if (n <= 0)
		{
			break;
		}

		bool hadCollision = false;

		std::vector<int> indices(n);
		std::iota(indices.begin(), indices.end(), 0);
		std::shuffle(indices.begin(), indices.end(), rng);

		for (int idx1 = 0; idx1 < n; ++idx1)
		{
			const int i = indices[idx1];
			for (int idx2 = idx1 + 1; idx2 < n; ++idx2)
			{
				const int j = indices[idx2];
				if (ResolveCollision(i, j))
				{
					hadCollision = true;
				}
			}
		}

		std::shuffle(indices.begin(), indices.end(), rng);
		for (int idx = 0; idx < n; ++idx)
		{
			if (ResolveWallCollision(indices[idx]))
			{
				hadCollision = true;
			}
		}

		if (!hadCollision)
		{
			break;
		}

	}

	m_balls.erase(
		std::remove_if(
			m_balls.begin(),
			m_balls.end(),
			[](const Ball& ball) { return ball.GetRemoveFlag(); }),
		m_balls.end());

	for (auto& b : m_balls)
	{
		if (b.GetRemoveFlag())
		{
			continue;
		}
		if (m_box.y > b.GetPosition().y - b.GetRadius())
		{
			m_isGameOver = true;
		}
	}
}

void BallManager::Draw()
{
	Rect rect = m_pipette.GetRect();
	Graphics::DrawTexture(ResourceManager<Texture>::Get("Line"), Rect{ rect.x - Graphics::GetWindowSize(0.005f).x, rect.y + rect.height, Graphics::GetWindowSize(0.01f).x, Graphics::GetWindowSize(0.97f).y - rect.y - rect.height });
	for (auto& b : m_balls) b.DrawInterpolated(Time::FixedAlpha());
	m_nextBall.Draw();
	m_predictionBall.Draw();
	m_exchangeBall.Draw();
	m_pipette.Draw();
	Graphics::DrawText(ResourceManager<Font>::Get("Score"), std::to_string(m_score), Vector2{ Graphics::GetWindowSize(0.79f).x, Graphics::GetWindowSize(0.35f).y }, Colors::White);
}

void BallManager::AddBall()
{
	static std::mt19937 rng{ std::random_device{}() };
	std::uniform_int_distribution<int> dist(1, 8);
	int value = dist(rng);

	ResourceManager<AudioSource>::Get("SE").SetClip(ResourceManager<AudioClip>::Get("AddSound"));
	ResourceManager<AudioSource>::Get("SE").Play(0);
	m_balls.emplace_back(Vector2{Mouse::GetPos().x, Graphics::GetWindowSize(0.25f).y }, m_nextBall.GetStatus());

	m_nextBall = Ball(Vector2{ Mouse::GetPos().x, Graphics::GetWindowSize(0.2f).y }, StatusOf(value));
}

void BallManager::CheckPipetteUnderBalls()
{
	float x = m_nextBall.GetPosition().x;
	float nearestY = Graphics::GetWindowSize(1.0f).y;
	const Ball* below = nullptr;

	for (const Ball& ball : m_balls)
	{
		if (ball.GetRemoveFlag())
		{
			continue;
		}

		Vector2 pos = ball.GetPosition();
		float rad = ball.GetRadius();

		if (pos.x + rad >= x && x >= pos.x - rad && nearestY > pos.y - rad)
		{
			below = &ball;
		}

	}

	AtomicStatus predicted = StatusOf(kNone);
	if (below != nullptr)
	{
		if (const auto product = Chemistry::Combine(m_nextBall.GetStatus().molecule, below->GetStatus().molecule))
		{
			predicted = StatusOf(*product);
		}
	}
	m_predictionBall = Ball(Vector2{ Graphics::GetWindowSize(0.889f).x, Graphics::GetWindowSize(0.737f).y }, predicted);
	m_predictionBall.SetRadius(Graphics::GetWindowSize(0.09f).y);

}

bool BallManager::ResolveCollision(int i, int j)
{
	if (m_balls[i].GetRemoveFlag() || m_balls[j].GetRemoveFlag()) return false;

	Vector2 p1, p2, v1, v2;
	float m1, m2, e1, e2;
	float r1, r2;

	p1 = m_balls[i].GetPosition();
	p2 = m_balls[j].GetPosition();
	v1 = m_balls[i].GetVelocity();
	v2 = m_balls[j].GetVelocity();
	m1 = m_balls[i].GetMass();
	m2 = m_balls[j].GetMass();
	e1 = m_balls[i].GetElasticity();
	e2 = m_balls[j].GetElasticity();
	r1 = m_balls[i].GetRadius();
	r2 = m_balls[j].GetRadius();

	float dx = p2.x - p1.x;
	float dy = p2.y - p1.y;
	float distSq = dx * dx + dy * dy;
	float sumR = static_cast<float>(r1 + r2);

	if (distSq >= sumR * sumR) return false;

	//int ball1ID = m_balls[i].GetAtomicID();
	//int ball2ID = m_balls[j].GetAtomicID();
	//int deleteFlg1 = m_balls[i].GetRemoveFlag();
	//int deleteFlg2 = m_balls[j].GetRemoveFlag();

	float midpointX = (p1.x + p2.x) / 2.f;
	float midpointY = (p1.y + p2.y) / 2.f;

	//auto isBall1ID = [&](int id) { return ball1ID == id; };
	//auto isBall2ID = [&](int id) { return ball2ID == id; };

	float dist = std::sqrt(distSq);
	if (dist == 0.f) return false;

	float nx = dx / dist;
	float ny = dy / dist;

	float dvx = v2.x - v1.x;
	float dvy = v2.y - v1.y;
	float vn = dvx * nx + dvy * ny;

	if (vn >= 0.f) return false;

	if (m_balls[i].GetID() == kAntimatter || m_balls[j].GetID() == kAntimatter)
	{
		ResourceManager<AudioSource>::Get("SE").SetClip(ResourceManager<AudioClip>::Get("AntiCollisionSound"));
		ResourceManager<AudioSource>::Get("SE").Play(0);
		m_balls[i].SetRemoveFlag(true);
		m_balls[j].SetRemoveFlag(true);
		return false;
	}

	const auto product = Chemistry::Combine(m_balls[i].GetStatus().molecule, m_balls[j].GetStatus().molecule);

	if (product)
	{
		ResourceManager<AudioSource>::Get("SE").SetClip(ResourceManager<AudioClip>::Get("CollisionSound"));
		ResourceManager<AudioSource>::Get("SE").Play(0);
		m_score += m_balls[i].GetScore() + m_balls[j].GetScore();
		m_balls[i].SetRemoveFlag(true);
		m_balls[j].SetRemoveFlag(true);

		m_balls.emplace_back(Vector2{ midpointX, midpointY }, StatusOf(*product));

		return false;

	}

	float e = std::min(e1, e2);
	float J = -(1.f + e) * vn / (1.f / m1 + 1.f / m2);

	v1.x -= J * nx / m1;
	v1.y -= J * ny / m1;
	v2.x += J * nx / m2;
	v2.y += J * ny / m2;

	constexpr float kPercent = 0.8f;
	float overlap = sumR - dist;
	float correction = overlap * kPercent / (1 / m1 + 1 / m2);
	constexpr float baumgarteFactor = 0.15f;
	float baumgarteVelocity = baumgarteFactor * overlap;

	p1.x -= (correction * nx / m1);
	p1.y -= (correction * ny / m1);
	p2.x += (correction * nx / m2);
	p2.y += (correction * ny / m2);

	v1.x -= baumgarteVelocity * nx / m1;
	v1.y -= baumgarteVelocity * ny / m1;
	v2.x += baumgarteVelocity * nx / m2;
	v2.y += baumgarteVelocity * ny / m2;

	m_balls[i].SetPosition(p1);
	m_balls[i].SetVelocity(v1);
	m_balls[j].SetPosition(p2);
	m_balls[j].SetVelocity(v2);

	return true;
}

bool BallManager::ResolveWallCollision(int i)
{

	Vector2 pos = m_balls[i].GetPosition();
	Vector2 vel = m_balls[i].GetVelocity();
	float rad = m_balls[i].GetRadius();
	float e = m_balls[i].GetElasticity();

	bool resolved = false;

	if (pos.x - rad < m_box.x)
	{
		pos.x = m_box.x + rad;
		vel.x = -vel.x * e;
		resolved = true;
	}
	if (pos.x + rad > m_box.x + m_box.width)
	{
		pos.x = m_box.x + m_box.width - rad;
		vel.x = -vel.x * e;
		resolved = true;
	}

	if (pos.y + rad > m_box.y + m_box.height)
	{
		pos.y = m_box.y + m_box.height - rad;
		vel.y = -vel.y * e;
		resolved = true;
	}

	m_balls[i].SetPosition(pos);
	m_balls[i].SetVelocity(vel);

	return resolved;
}

AtomicStatus BallManager::StatusOf(int spawnValue)
{
	if (spawnValue == kAntimatter)
	{
		return AtomicStatus{ kAntimatter, "", 1, Color{ 0, 0, 0 }, 1.0f };
	}
	if (spawnValue < Chemistry::ElementCount + 2 && spawnValue >= 2)
	{
		return StatusOf(Chemistry::MakeAtom(static_cast<Chemistry::Element>(spawnValue - 2)));
	}
	return AtomicStatus{ kNone, "", 0, Color{ 0, 0, 0 }, 0.0f };
}

AtomicStatus BallManager::StatusOf(const Chemistry::Molecule& molecule)
{
	const Chemistry::Description d = Chemistry::Describe(molecule);
	AtomicStatus status{ kCompound, d.name, static_cast<float>(d.atomCount), d.color, d.mass };
	status.molecule = molecule;
	return status;
}

int BallManager::GetScore()
{
	return m_score;
}

bool BallManager::isGameOver()
{
	return m_isGameOver;
}

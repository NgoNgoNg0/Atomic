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

	m_gravity = Graphics::GetWindowSize(1.0f / 5400.0f).y;
	m_box = Rect{ Graphics::GetWindowSize(0.05f).x * 2.06f, Graphics::GetWindowSize(0.2f).y, Graphics::GetWindowSize(0.6f).x * 0.975f - Graphics::GetWindowSize(0.05f).x * 2.06f, Graphics::GetWindowSize(1.0f).y * 0.97f - Graphics::GetWindowSize(0.2f).y };
	m_pipette = Pipette(m_box);
	m_score = 0;
	m_isGameOver = false;

	m_atomicStatus[NONE] = AtomicStatus{ NONE, "", 0, Color{0, 0, 0}, 0.0f };
	m_atomicStatus[ANTIMATTER] = AtomicStatus{ ANTIMATTER, "", 1, Color{0, 0, 0}, 1.0f };

	m_atomicStatus[O] = AtomicStatus{ O,  "O",  1, Color{255,   0,   0}, 16.0f };
	m_atomicStatus[C] = AtomicStatus{ C,  "C",  1, Color{200, 200, 200}, 12.01f };
	m_atomicStatus[H] = AtomicStatus{ H,  "H",  1, Color{  0,   0, 255}, 1.0f };
	m_atomicStatus[N] = AtomicStatus{ N,  "N",  1, Color{  0, 255,   0}, 14.01f };
	m_atomicStatus[S] = AtomicStatus{ S,  "S",  1, Color{255, 220,   0}, 32.06f };
	m_atomicStatus[Cl] = AtomicStatus{ Cl, "Cl", 1, Color{120, 255, 120}, 35.45f };
	m_atomicStatus[Na] = AtomicStatus{ Na, "Na", 1, Color{180, 200, 255}, 22.99f };

	m_atomicStatus[O2] = AtomicStatus{ O2,  "O2",  2, Color{255, 100,   0}, m_atomicStatus[O].mass * 2.0f };
	m_atomicStatus[C2] = AtomicStatus{ C2,  "C2",  2, Color{150, 150, 150}, m_atomicStatus[C].mass * 2.0f };
	m_atomicStatus[H2] = AtomicStatus{ H2,  "H2",  2, Color{  0,  90, 255}, m_atomicStatus[H].mass * 2.0f };
	m_atomicStatus[N2] = AtomicStatus{ N2,  "N2",  2, Color{  0, 150,   0}, m_atomicStatus[N].mass * 2.0f };
	m_atomicStatus[Cl2] = AtomicStatus{ Cl2, "Cl2", 2, Color{ 50, 200,  50}, m_atomicStatus[Cl].mass * 2.0f };
	m_atomicStatus[S2] = AtomicStatus{ S2,  "S2",  2, Color{200, 200,   0}, m_atomicStatus[S].mass * 2.0f };

	m_atomicStatus[OH] = AtomicStatus{ OH,  "OH",  2, Color{255,   0, 255}, m_atomicStatus[O].mass + m_atomicStatus[H].mass };
	m_atomicStatus[CO] = AtomicStatus{ CO,  "CO",  2, Color{128,   0,   0}, m_atomicStatus[C].mass + m_atomicStatus[O].mass };
	m_atomicStatus[NH] = AtomicStatus{ NH,  "NH",  2, Color{  0, 128, 128}, m_atomicStatus[N].mass + m_atomicStatus[H].mass };
	m_atomicStatus[HCl] = AtomicStatus{ HCl, "HCl", 2, Color{  0, 180, 180}, m_atomicStatus[H].mass + m_atomicStatus[Cl].mass };
	m_atomicStatus[NO] = AtomicStatus{ NO,  "NO",  2, Color{150, 150, 255}, m_atomicStatus[N].mass + m_atomicStatus[O].mass };

	m_atomicStatus[H2O] = AtomicStatus{ H2O, "H2O", 3, Color{  0, 200, 255}, m_atomicStatus[H].mass * 2.0f + m_atomicStatus[O].mass };
	m_atomicStatus[CO2] = AtomicStatus{ CO2, "CO2", 3, Color{170,   0,   0}, m_atomicStatus[C].mass + m_atomicStatus[O].mass * 2.0f };
	m_atomicStatus[NH2] = AtomicStatus{ NH2, "NH2", 3, Color{ 80, 128,   0}, m_atomicStatus[N].mass + m_atomicStatus[H].mass * 2.0f };
	m_atomicStatus[SO2] = AtomicStatus{ SO2, "SO2", 3, Color{255, 170,   0}, m_atomicStatus[S].mass + m_atomicStatus[O].mass * 2.0f };
	m_atomicStatus[NO2] = AtomicStatus{ NO2, "NO2", 3, Color{200, 120, 120}, m_atomicStatus[N].mass + m_atomicStatus[O].mass * 2.0f };
	m_atomicStatus[N2O] = AtomicStatus{ N2O, "N2O", 3, Color{180, 180, 255}, m_atomicStatus[N].mass * 2.0f + m_atomicStatus[O].mass };
	m_atomicStatus[O3] = AtomicStatus{ O3,  "O3",  3, Color{120, 200, 255}, m_atomicStatus[O].mass * 3.0f };
	m_atomicStatus[H2S] = AtomicStatus{ H2S, "H2S", 3, Color{255, 230, 120}, m_atomicStatus[H].mass * 2.0f + m_atomicStatus[S].mass };
	m_atomicStatus[CS2] = AtomicStatus{ CS2, "CS2", 3, Color{220, 250,  40}, m_atomicStatus[C].mass + m_atomicStatus[S].mass * 2.0f };
	m_atomicStatus[CH2] = AtomicStatus{ CH2, "CH2", 3, Color{ 93,   0, 255}, m_atomicStatus[C].mass + m_atomicStatus[H].mass * 2.0f };

	m_atomicStatus[NH3] = AtomicStatus{ NH3,  "NH3",  4, Color{128, 100,   0}, m_atomicStatus[N].mass + m_atomicStatus[H].mass * 3.0f };
	m_atomicStatus[SO3] = AtomicStatus{ SO3,  "SO3",  4, Color{255, 140,   0}, m_atomicStatus[S].mass + m_atomicStatus[O].mass * 3.0f };
	m_atomicStatus[H2O2] = AtomicStatus{ H2O2, "H2O2", 4, Color{  0, 170, 220}, m_atomicStatus[H].mass * 2.0f + m_atomicStatus[O].mass * 2.0f };

	m_atomicStatus[CH4] = AtomicStatus{ CH4,    "CH4",    5, Color{ 40,   0, 220}, m_atomicStatus[C].mass + m_atomicStatus[H].mass * 4.0f };
	m_atomicStatus[NH4Cl] = AtomicStatus{ NH4Cl,  "NH4Cl",  6, Color{  0, 220, 180}, m_atomicStatus[N].mass + m_atomicStatus[H].mass * 4.0f + m_atomicStatus[Cl].mass };
	m_atomicStatus[H2SO4] = AtomicStatus{ H2SO4,  "H2SO4",  7, Color{255, 100,   0}, m_atomicStatus[H].mass * 2.0f + m_atomicStatus[S].mass + m_atomicStatus[O].mass * 4.0f };
	m_atomicStatus[NaCl] = AtomicStatus{ NaCl,   "NaCl",   2, Color{200, 200, 255}, m_atomicStatus[Na].mass + m_atomicStatus[Cl].mass };
	m_atomicStatus[NaOH] = AtomicStatus{ NaOH,   "NaOH",   3, Color{160, 200, 255}, m_atomicStatus[Na].mass + m_atomicStatus[O].mass + m_atomicStatus[H].mass };
	m_atomicStatus[NaHCO3] = AtomicStatus{ NaHCO3, "NaHCO3", 6, Color{180, 220, 255}, m_atomicStatus[Na].mass + m_atomicStatus[H].mass + m_atomicStatus[C].mass + m_atomicStatus[O].mass * 3.0f };
	m_atomicStatus[Na2CO3] = AtomicStatus{ Na2CO3, "Na2CO3", 6, Color{160, 210, 255}, m_atomicStatus[Na].mass * 2.0f + m_atomicStatus[C].mass + m_atomicStatus[O].mass * 3.0f };
	m_atomicStatus[CH3Cl] = AtomicStatus{ CH3Cl,  "CH3Cl",  5, Color{ 60, 110, 180}, m_atomicStatus[C].mass + m_atomicStatus[H].mass * 3.0f + m_atomicStatus[Cl].mass };
	m_atomicStatus[CH2Cl2] = AtomicStatus{ CH2Cl2, "CH2Cl2", 5, Color{ 70, 220, 150}, m_atomicStatus[C].mass + m_atomicStatus[H].mass * 2.0f + m_atomicStatus[Cl].mass * 2.0f };
	m_atomicStatus[HNO3] = AtomicStatus{ HNO3,   "HNO3",   5, Color{100, 158, 200}, m_atomicStatus[H].mass + m_atomicStatus[N].mass + m_atomicStatus[O].mass * 3.0f };
	m_atomicStatus[NaHSO4] = AtomicStatus{ NaHSO4, "NaHSO4", 7, Color{ 50, 151, 168}, m_atomicStatus[Na].mass + m_atomicStatus[H].mass + m_atomicStatus[S].mass + m_atomicStatus[O].mass * 4.0f };
	m_atomicStatus[NaClO3] = AtomicStatus{ NaClO3, "NaClO3", 5, Color{ 93,  33, 191}, m_atomicStatus[Na].mass + m_atomicStatus[Cl].mass + m_atomicStatus[O].mass * 3.0f };
	m_atomicStatus[H2CO3] = AtomicStatus{ H2CO3,  "H2CO3",  6, Color{255,  87, 252}, m_atomicStatus[H].mass * 2.0f + m_atomicStatus[C].mass + m_atomicStatus[O].mass * 3.0f };
	m_atomicStatus[CH3OH] = AtomicStatus{ CH3OH,  "CH3OH",  6, Color{ 76,   0, 255}, m_atomicStatus[C].mass + m_atomicStatus[H].mass * 4.0f + m_atomicStatus[O].mass };

	static std::mt19937 rng{ std::random_device{}() };
	std::uniform_int_distribution<int> dist(1, 8);
	int value = dist(rng);
	m_nextBall = Ball(Vector2{ Mouse::GetPos().x, Graphics::GetWindowSize(0.2f).y }, m_atomicStatus[value]);
	m_predictionBall = Ball(Vector2{ Graphics::GetWindowSize(0.889f).x, Graphics::GetWindowSize(0.737f).y }, m_atomicStatus[NONE]);
	m_exchangeBall = Ball(Vector2{ Graphics::GetWindowSize(0.699f).x, Graphics::GetWindowSize(0.737f).y }, m_atomicStatus[NONE]);
	m_balls.clear();

}

void BallManager::Update()
{
	const float moveLimit = Graphics::GetWindowSize(5.0f / 108.0f).y;
	const float clampedX = std::min(m_box.x + m_box.width - moveLimit, std::max(m_box.x + moveLimit, static_cast<float>(Mouse::GetPos().x)));
	m_nextBall.SetPosition(Vector2{ clampedX, Graphics::GetWindowSize(0.2f).y });
	if (Mouse::GetButtonDown(MouseButton::Left)) AddBall();
	m_pipette.Update();
	for (auto& b : m_balls) b.Update();
	for (auto& b : m_balls) b.AddVelocity(Vector2{0, m_gravity});

	static std::random_device rd;
	static std::mt19937 rng(rd());

	if (Mouse::GetButtonDown(MouseButton::Right))
	{
		ResourceManager<AudioSource>::Get("SE").SetClip(ResourceManager<AudioClip>::Get("ChangeBallSound"));
		ResourceManager<AudioSource>::Get("SE").Play(0);
		int nowID = m_nextBall.GetID();
		Vector2 nowPos = m_exchangeBall.GetPosition();

		m_nextBall = Ball(m_nextBall.GetPosition(), m_atomicStatus[m_exchangeBall.GetID()]);
		m_exchangeBall = Ball(nowPos, m_atomicStatus[nowID]);

		if (m_nextBall.GetID() == NONE)
		{
			static std::mt19937 rn{ std::random_device{}() };
			std::uniform_int_distribution<int> dis(1, 8);
			int value = dis(rn);
			m_nextBall = Ball(m_nextBall.GetPosition(), m_atomicStatus[value]);
		}
		m_exchangeBall.SetRadius(Graphics::GetWindowSize(0.09f).y);
	}

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

	CheckPipetteUnderBalls();

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
	for (auto& b : m_balls) b.Draw();
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

	m_nextBall = Ball(Vector2{ Mouse::GetPos().x, Graphics::GetWindowSize(0.2f).y }, m_atomicStatus[value]);
}

void BallManager::CheckPipetteUnderBalls()
{
	float x = m_nextBall.GetPosition().x;
	float nearestY = Graphics::GetWindowSize(1.0f).y;
	int BID = NONE;
	int FID = NONE;
	const Reaction* reaction;

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
			BID = ball.GetID();
		}

	}

	reaction = FindReactionByPair(m_nextBall.GetID(), BID);

	if (reaction == nullptr) FID = NONE;
	else FID = reaction->product;
	m_predictionBall = Ball(Vector2{ Graphics::GetWindowSize(0.889f).x, Graphics::GetWindowSize(0.737f).y }, m_atomicStatus[FID]);
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

	if (m_balls[i].GetID() == ANTIMATTER || m_balls[j].GetID() == ANTIMATTER)
	{
		ResourceManager<AudioSource>::Get("SE").SetClip(ResourceManager<AudioClip>::Get("AntiCollisionSound"));
		ResourceManager<AudioSource>::Get("SE").Play(0);
		m_balls[i].SetRemoveFlag(true);
		m_balls[j].SetRemoveFlag(true);
		return false;
	}

	const Reaction* reaction = FindReactionByPair(m_balls[i].GetID(), m_balls[j].GetID());

	if (reaction != nullptr)
	{
		ResourceManager<AudioSource>::Get("SE").SetClip(ResourceManager<AudioClip>::Get("CollisionSound"));
		ResourceManager<AudioSource>::Get("SE").Play(0);
		m_score += m_balls[i].GetScore() + m_balls[j].GetScore();
		m_balls[i].SetRemoveFlag(true);
		m_balls[j].SetRemoveFlag(true);

		m_balls.emplace_back(Vector2{ midpointX, midpointY }, m_atomicStatus[reaction->product]);

		if (reaction->byProduct != NONE)
		{
			m_balls.emplace_back(Vector2{ midpointX + Graphics::GetWindowSize(0.05f).x, midpointY } , m_atomicStatus[reaction->byProduct]);
		}
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

bool BallManager::MatchReactionPair(const Reaction& reaction, int id1, int id2)
{
	return (reaction.lhs == id1 && reaction.rhs == id2)
		|| (reaction.lhs == id2 && reaction.rhs == id1);
}

const Reaction* BallManager::FindReactionByPair(int id1, int id2)
{
	for (const Reaction& reaction : kReactions)
	{
		if (MatchReactionPair(reaction, id1, id2))
		{
			return &reaction;
		}
	}
	return nullptr;
}

int BallManager::GetScore()
{
	return m_score;
}

bool BallManager::isGameOver()
{
	return m_isGameOver;
}
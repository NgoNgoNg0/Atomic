#include "Ball.h"

#include "Framework/Vector2.h"
#include "Framework/Graphics.h"
#include "Framework/Font.h"
#include "Framework/ResourceManager.h"

namespace
{
	// Widest text allowed, as a fraction of the ball's diameter.
	constexpr float kTextWidthRatio = 0.8f;

	static const char* subscript[] =
	{
		"\xE2\x82\x80",
		"\xE2\x82\x81",
		"\xE2\x82\x82",
		"\xE2\x82\x83",
		"\xE2\x82\x84",
		"\xE2\x82\x85",
		"\xE2\x82\x86",
		"\xE2\x82\x87",
		"\xE2\x82\x88",
		"\xE2\x82\x89"
	};

	std::string ToSubscript(const std::string& text)
	{
		std::string result;

		for (char ch : text)
		{
			if (ch >= '0' && ch <= '9')
				result += subscript[ch - '0'];
			else
				result += ch;
		}

		return result;
	}
}

Ball::Ball(Vector2 pos, AtomicStatus status)
	: m_position(pos)
	, m_previousPosition(pos)
	, m_velocity(Vector2{0, 0})
	, m_status(status)
	, m_removeFlag(false)
	, m_radius(Graphics::GetWindowSize(5.0f / 108.0f).y + Graphics::GetWindowSize(5.0f / 216.0f).y * (status.level - 1))
{
	m_status.name = ToSubscript(m_status.name);
	ResourceManager<Font>::Register(m_status.name, "Assets/Fonts/MPLUS1p-Bold.ttf", Graphics::GetWindowSize(1.0f / 27.0f).y + Graphics::GetWindowSize(1.0f / 360.0f).y * m_status.level);
}

Ball::~Ball()
{

}

void Ball::Update()
{
	m_previousPosition = m_position;
	m_position.x += m_velocity.x;
	m_position.y += m_velocity.y;
}

void Ball::Draw()
{
	DrawAt(m_position);
}

void Ball::DrawInterpolated(float alpha)
{
	DrawAt(Vector2{
		m_previousPosition.x + (m_position.x - m_previousPosition.x) * alpha,
		m_previousPosition.y + (m_position.y - m_previousPosition.y) * alpha });
}

void Ball::DrawAt(Vector2 position)
{
	Color color = Colors::Black;
	if (m_status.ID == 0) return;
	if (m_status.ID == 1) color = Colors::White;
	Graphics::DrawCircle(position, GetRadius(), color);
	Graphics::DrawCircle(position, GetRadius() * 0.95, m_status.color);
	Graphics::DrawText(ResourceManager<Font>::Get(m_status.name), m_status.name, position, Colors::Black, true, GetRadius() * 2.0f * kTextWidthRatio);
}

void Ball::ResetInterpolation()
{
	m_previousPosition = m_position;
}

void Ball::AddVelocity(Vector2 velocity)
{
	m_velocity.x += velocity.x;
	m_velocity.y += velocity.y;
}

void Ball::SetVelocity(Vector2 velocity)
{
	m_velocity = velocity;
}

void Ball::SetPosition(Vector2 position)
{
	m_position = position;
}

void Ball::SetRadius(float rad)
{
	m_radius = rad;
}

Vector2 Ball::GetPosition() const
{
	return m_position;
}

Vector2 Ball::GetVelocity()
{
	return m_velocity;
}

float Ball::GetRadius() const
{
	return m_radius;
}

float Ball::GetMass()
{
	return m_status.mass + 1000;
}

float Ball::GetElasticity()
{
	return m_status.elasticity;
}

void Ball::SetRemoveFlag(bool flag)
{
	m_removeFlag = flag;
}

bool Ball::GetRemoveFlag() const
{
	return m_removeFlag;
}

int Ball::GetID() const
{
	return m_status.ID;
}

int Ball::GetScore() const
{
	return m_status.level * 20;
}

AtomicStatus Ball::GetStatus() const
{
	return m_status;
}
#include "Ball.h"

#include "Framework/Vector2.h"
#include "Framework/Graphics.h"

Ball::Ball(Vector2 pos, AtomicStatus status)
	: m_position(pos)
	, m_velocity(Vector2{0, 0})
	, m_status(status)
	, m_removeFlag(false)
{

}

Ball::~Ball()
{

}

void Ball::Update()
{
	m_position.x += m_velocity.x;
	m_position.y += m_velocity.y;
}

void Ball::Draw()
{
	Graphics::DrawCircle(m_position, GetRadius(), m_status.color);
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

Vector2 Ball::GetPosition()
{
	return m_position;
}

Vector2 Ball::GetVelocity()
{
	return m_velocity;
}

float Ball::GetRadius()
{
	return Graphics::GetWindowSize(5.0f / 108.0f).y + Graphics::GetWindowSize(5.0f / 216.0f).y * (m_status.level - 1);
}

float Ball::GetMass()
{
	return m_status.mass;
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

int Ball::GetID()
{
	return m_status.ID;
}
#pragma once

#include "Framework/Vector2.h"
#include "Framework/Color.h"

#include <string>

struct AtomicStatus
{
	int ID;
	std::string name;
	float level;
	Color color;
	float mass;
	float elasticity = 0.3f;
};

class Ball
{
public:
	Ball(Vector2 pos, AtomicStatus status);
	Ball() = default;
	~Ball();

	void Update();
	void Draw();
	void AddVelocity(Vector2 velocity);
	void SetVelocity(Vector2 velocity);
	void SetPosition(Vector2 position);
	void SetRadius(float rad);
	Vector2 GetPosition() const;
	Vector2 GetVelocity();
	float GetRadius() const;
	float GetMass();
	float GetElasticity();
	void SetRemoveFlag(bool flag);
	bool GetRemoveFlag() const;
	int GetID() const;
	int GetScore() const;
	AtomicStatus GetStatus();

private:
	Vector2 m_position;
	Vector2 m_velocity;
	AtomicStatus m_status;
	bool m_removeFlag;
	float m_radius;

};
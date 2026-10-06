#pragma once

#include "Framework/Vector2.h"
#include "Framework/Color.h"
#include "Chemistry.h"

#include <string>

struct AtomicStatus
{
	int ID;
	std::string name;
	float level;
	Color color;
	float mass;
	float elasticity = 0.3f;
	Chemistry::Molecule molecule;
};

class Ball
{
public:
	Ball(Vector2 pos, AtomicStatus status);
	Ball() = default;
	~Ball();

	void Update();
	void Draw();
	// Draws between the previous and current fixed-step positions (alpha in 0..1).
	void DrawInterpolated(float alpha);
	void ResetInterpolation();
	void AddVelocity(Vector2 velocity);
	void SetVelocity(Vector2 velocity);
	void SetPosition(Vector2 position);
	void SetRadius(float rad);
	Vector2 GetPosition() const;
	Vector2 GetVelocity() const;
	float GetRadius() const;
	float GetMass();
	float GetElasticity();
	void SetRemoveFlag(bool flag);
	bool GetRemoveFlag() const;
	int GetID() const;
	int GetScore() const;
	AtomicStatus GetStatus() const;

private:
	void DrawAt(Vector2 position);

	Vector2 m_position;
	Vector2 m_previousPosition;
	Vector2 m_velocity;
	AtomicStatus m_status;
	bool m_removeFlag;
	float m_radius;

};
#pragma once

#include "Ball.h"
#include "Chemistry.h"
#include "Pipette.h"
#include "Framework/Rect.h"
#include "Framework/AudioSource.h"

#include <vector>
#include <array>

class BallManager
{
public:
	// Ball kinds stored in AtomicStatus::ID.
	static constexpr int kNone = 0;
	static constexpr int kAntimatter = 1;
	static constexpr int kCompound = 2;

	static void Initialize();
	static void Update();
	static void FixedUpdate();
	// Call while physics is paused so rendering does not interpolate stale positions.
	static void ResetInterpolation();
	static void Draw();

	static int GetScore();
	static bool isGameOver();

private:
	// Gravity added to a ball's velocity per fixed step, as a multiple of m_gravity.
	// Equals the original per-frame formula (dt * 360 - 2) evaluated at 60 FPS.
	static constexpr float kGravityPerStep = 4.0f;

	static void AddBall();
	static void CheckPipetteUnderBalls();
	static bool ResolveCollision(int i, int j);
	static bool ResolveWallCollision(int i);
	// Spawn value: 0 = empty, 1 = antimatter, 2.. = an element (in Chemistry::Element order).
	static AtomicStatus StatusOf(int spawnValue);
	static AtomicStatus StatusOf(const Chemistry::Molecule& molecule);

	inline static int m_score;
	inline static bool m_isGameOver;
	inline static bool m_asleep = false;
	inline static int m_restSteps = 0;
	inline static size_t m_sleepBallCount = 0;
	inline static float m_gravity;
	inline static std::vector<Ball> m_balls;
	inline static Ball m_nextBall;
	inline static Ball m_predictionBall;
	inline static Ball m_exchangeBall;
	inline static Rect m_box;
	inline static Pipette m_pipette;

};
#pragma once

#include <cstdint>

class Time
{
public:
    // Step length of the fixed-rate physics update (matches the original 60 FPS behaviour).
    static constexpr float kFixedTimeStep = 1.0f / 60.0f;

    static void Initialize();
    static void Update();

    static float DeltaTime();
    static float FPS();
    static float SinceStartup();

    // Progress (0..1) through the current fixed step; used to interpolate rendering.
    static float FixedAlpha();
    static void SetFixedAlpha(float alpha);

private:
    static constexpr float kMaxDeltaTime = 0.1f;

    inline static float m_deltaTime = 0.0f;
    inline static float m_fps = 0.0f;
    inline static float m_time = 0.0f;
    inline static float m_fixedAlpha = 0.0f;

    inline static std::uint64_t m_lastCounter = 0;
};
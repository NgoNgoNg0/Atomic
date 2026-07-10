#pragma once

#include <cstdint>

class Time
{
public:
    static void Initialize();
    static void Update();

    static float DeltaTime();
    static float FPS();
    static float SinceStartup();

private:
    inline static float m_deltaTime = 0.0f;
    inline static float m_fps = 0.0f;
    inline static float m_time = 0.0f;

    inline static std::uint64_t m_lastCounter = 0;
};
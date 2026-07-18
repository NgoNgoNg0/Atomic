#include "Timer.h"
#include "Time.h"

#include <algorithm>

Timer::Timer(float duration)
    : m_duration(duration)
    , m_time(0.0f)
    , m_running(false)
{}

void Timer::Start(float duration)
{
    m_duration = duration;
    m_time = 0.0f;
    m_running = true;
}

void Timer::Stop()
{
    m_running = false;
}

void Timer::Reset()
{
    m_time = 0.0f;
}

void Timer::Update()
{
    if (!m_running)
    {
        return;
    }

    m_time += Time::DeltaTime();

    if (m_time >= m_duration)
    {
        m_time = m_duration;
        m_running = false;
    }
}

bool Timer::IsFinished() const
{
    return !m_running && m_time >= m_duration;
}

bool Timer::IsRunning() const
{
    return m_running;
}

float Timer::GetTime() const
{
    return m_time;
}

float Timer::GetRemainingTime() const
{
    return std::max(0.0f, m_duration - m_time);
}

float Timer::GetDuration() const
{
    return m_duration;
}
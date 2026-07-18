#pragma once

class Timer
{
public:
    Timer(float duration = 0.0f);

    void Start(float duration);
    void Stop();
    void Reset();

    void Update();

    bool IsFinished() const;
    bool IsRunning() const;

    float GetTime() const;
    float GetRemainingTime() const;
    float GetDuration() const;

private:
    float m_duration;
    float m_time;

    bool m_running;
};
#include "Time.h"

#include <SDL3/SDL.h>

void Time::Initialize()
{
	m_lastCounter = SDL_GetPerformanceCounter();

	m_deltaTime = 0.0f;
	m_fps = 0.0f;
	m_time = 0.0f;
}

void Time::Update()
{
	std::uint64_t currentCounter = SDL_GetPerformanceCounter();
	std::uint64_t frequency = SDL_GetPerformanceFrequency();

	m_deltaTime = static_cast<float>(currentCounter - m_lastCounter) / static_cast<float>(frequency);

	m_lastCounter = currentCounter;

	m_time += m_deltaTime;

	if (m_deltaTime > 0.0f)
	{
		m_fps = 1.0f / m_deltaTime;
	}
}

float Time::DeltaTime()
{
	return m_deltaTime;
}

float Time::FPS()
{
	return m_fps;
}

float Time::SinceStartup()
{
	return m_time;
}
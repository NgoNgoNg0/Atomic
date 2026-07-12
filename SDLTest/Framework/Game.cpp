#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>

#include "Game.h"
#include "Graphics.h"
#include "Input.h"
#include "Mouse.h"
#include "Time.h"
#include "Audio.h"

Game::Game()
	: init(SDL_Init(SDL_INIT_VIDEO))
	, initAudio(Audio::Initialize())
	, m_isRunning(true)
	, m_window("Atomic", 1280, 720)
	, m_targetFPS(120)
{
	TTF_Init();
}

void Game::Run()
{
	Graphics::Initialize(m_window.Get());
	Initialize();

	while (m_isRunning)
	{
		Uint64 frameStart = SDL_GetPerformanceCounter();
		ProcessEvents();
		Time::Update();
		Input::Update();
		Mouse::Update();
		Update();
		Graphics::BeginFrame();
		Draw();
		Graphics::EndFrame();
		WaitForNextFrame(frameStart);
	}

	Finalize();
	Graphics::Finalize();
	Audio::Finalize();
	SDL_Quit();

}

void Game::Quit()
{
	m_isRunning = false;
}

void Game::ProcessEvents()
{
	SDL_Event event;

	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_EVENT_QUIT)
		{
			m_isRunning = false;
		}
	}

}

void Game::WaitForNextFrame(Uint64 frameStart)
{
	const Uint64 frequency = SDL_GetPerformanceFrequency();

	const double targetTime = 1.0 / static_cast<double>(m_targetFPS);

	while (true)
	{
		Uint64 current = SDL_GetPerformanceCounter();

		double elapsed =
			static_cast<double>(current - frameStart) /
			static_cast<double>(frequency);

		if (elapsed >= targetTime)
		{
			break;
		}

		double remain = targetTime - elapsed;

		if (remain > 0.002)
		{
			SDL_Delay(1);
		}
	}
}
#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>

#include "Game.h"
#include "Graphics.h"
#include "Input.h"
#include "Mouse.h"
#include "Time.h"
#include "Audio.h"
#include "Persistence.h"

#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#endif

Game::Game(Vector2 WindowSize)
	: m_isRunning(true)
	, m_window("Atomic", WindowSize)
	, m_targetFPS(120)
{
	SDL_Init(SDL_INIT_VIDEO);
    Audio::Initialize();
	TTF_Init();
	Graphics::Initialize(m_window.Get(), WindowSize);
}

void Game::Run()
{
	Initialize();
	Time::Initialize();

#ifdef __EMSCRIPTEN__
	// Saved data must be loaded from the browser's storage before the game reads it.
	Persistence::Initialize();

	// The browser drives the loop (requestAnimationFrame); this call does not return.
	emscripten_set_main_loop_arg(
		[](void* game) { static_cast<Game*>(game)->RunFrame(); },
		this, 0, true);
#else
	while (m_isRunning)
	{
		RunFrame();
	}

	Finalize();
	Graphics::Finalize();
	Audio::Finalize();
	SDL_Quit();
#endif
}

void Game::RunFrame()
{
	if (!Persistence::IsReady())
	{
		return;
	}

	Uint64 frameStart = SDL_GetPerformanceCounter();
	ProcessEvents();
	Time::Update();
	Input::Update();
	Mouse::Update();
	Update();
	RunFixedUpdates();
	Graphics::BeginFrame();
	Draw();
	Graphics::EndFrame();
#ifdef __EMSCRIPTEN__
	if (!m_isRunning)
	{
		emscripten_cancel_main_loop();
	}
#else
	WaitForNextFrame(frameStart);
#endif
}

void Game::RunFixedUpdates()
{
	m_fixedAccumulator += Time::DeltaTime();

	// Time::DeltaTime is clamped, so this loop is bounded.
	while (m_fixedAccumulator >= Time::kFixedTimeStep)
	{
		FixedUpdate();
		m_fixedAccumulator -= Time::kFixedTimeStep;
	}

	Time::SetFixedAlpha(m_fixedAccumulator / Time::kFixedTimeStep);
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
		Mouse::HandleEvent(event);

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

#include <SDL3/SDL.h>

#include "Game.h"
#include "Graphics.h"
#include "Input.h"
#include "Mouse.h"
#include "Time.h"

Game::Game()
	: m_isRunning(true)
	, m_window("Atomic", 1280, 720)
{
	SDL_Init(SDL_INIT_VIDEO);
}

void Game::Run()
{
	Initialize();
	Graphics::Initialize(m_window.Get());

	while (m_isRunning)
	{
		ProcessEvents();
		Time::Update();
		Input::Update();
		Mouse::Update();
		Update();
		Graphics::BeginFrame();
		Draw();
		Graphics::EndFrame();
	}

	Finalize();
	Graphics::Finalize();
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
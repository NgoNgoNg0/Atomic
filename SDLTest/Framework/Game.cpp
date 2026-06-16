#include <SDL3/SDL.h>

#include "Game.h"
#include "Graphics.h"
#include "Input.h"

Game::Game()
	: m_isRunning(true)
{
	SDL_Init(SDL_INIT_VIDEO);
}

void Game::Run()
{
	Initialize();

	while (m_isRunning)
	{
		ProcessEvents();
		Input::Update();
		Update();
		Graphics::BeginFrame();
		Draw();
		Graphics::EndFrame();
	}

	Finalize();

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
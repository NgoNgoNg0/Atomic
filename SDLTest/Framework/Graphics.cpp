#include "Graphics.h"

#include <SDL3/SDL.h>

bool Graphics::Initialize(SDL_Window* window)
{
	m_renderer = SDL_CreateRenderer(window, nullptr);
	return m_renderer != nullptr;
}

void Graphics::Finalize()
{
	SDL_DestroyRenderer(m_renderer);
	m_renderer = nullptr;
}

void Graphics::BeginFrame()
{
	SDL_SetRenderDrawColor(m_renderer, 0, 0, 0, 255);
	SDL_RenderClear(m_renderer);
}

void Graphics::EndFrame()
{
	SDL_RenderPresent(m_renderer);
}

void Graphics::DrawRect(float x, float y, float width, float height)
{
	SDL_FRect rect
	{
		x,
		y,
		width,
		height
	};

	SDL_RenderFillRect(m_renderer, &rect);
}

SDL_Renderer* Graphics::GetRenderer()
{
	return m_renderer;
}
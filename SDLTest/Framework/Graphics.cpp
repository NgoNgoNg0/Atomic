#include "Graphics.h"
#include "Rect.h"
#include "Color.h"
#include "Font.h"
#include "Vector2.h"

#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <SDL3_ttf/SDL_ttf.h>

bool Graphics::Initialize(SDL_Window* window)
{
	m_renderer = SDL_CreateRenderer(window, nullptr); 
	if (!m_renderer)
	{
		return false;
	}
	
	SDL_SetRenderLogicalPresentation(m_renderer, 1280, 720, SDL_LOGICAL_PRESENTATION_LETTERBOX);

	return true;
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

void Graphics::DrawRect(Rect rect, Color color)
{
	SDL_SetRenderDrawColor(m_renderer, color.r, color.g, color.b, color.a);
	SDL_FRect sdlrect
	{
		rect.x,
		rect.y,
		rect.width,
		rect.height
	};

	SDL_RenderFillRect(m_renderer, &sdlrect);
}

void Graphics::DrawTexture(const Texture& texture, Rect rect)
{
	SDL_FRect sdlRect
	{
		rect.x,
		rect.y,
		rect.width,
		rect.height
	};

	SDL_RenderTexture(m_renderer, texture.Get(), nullptr, &sdlRect);
}

void Graphics::DrawText(const Font& font, const std::string& text, Vector2 pos, Color color)
{
	SDL_Color sdlColor
	{
		color.r,
		color.g,
		color.b,
		color.a
	};

	SDL_Surface* surface = TTF_RenderText_Blended(font.Get(), text.c_str(), text.length(), sdlColor);

	if (!surface)
	{
		return;
	}

	SDL_Texture* texture =SDL_CreateTextureFromSurface(m_renderer, surface);

	if (!texture)
	{
		SDL_DestroySurface(surface);
		return;
	}

	SDL_FRect dst
	{
		pos.x,
		pos.y,
		static_cast<float>(surface->w),
		static_cast<float>(surface->h)
	};

	SDL_RenderTexture(m_renderer, texture, nullptr, &dst);

	SDL_DestroyTexture(texture);
	SDL_DestroySurface(surface);
}

SDL_Renderer* Graphics::GetRenderer()
{
	return m_renderer;
}
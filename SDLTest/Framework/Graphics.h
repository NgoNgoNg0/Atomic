#pragma once

#include "Rect.h"
#include "Color.h"
#include "Texture.h"

#include <SDL3/SDL.h>

class Graphics
{
public:
	static bool Initialize(SDL_Window* window);
	static void Finalize();
	static void BeginFrame();
	static void EndFrame();
	static void DrawRect(Rect rect, Color color);
	static void DrawTexture(const Texture& texture, Rect rect);
	// static void DrawTexture(TextureHandle texture, float x, float y);

	static SDL_Renderer* GetRenderer();

private:
	inline static SDL_Renderer* m_renderer = nullptr;
};
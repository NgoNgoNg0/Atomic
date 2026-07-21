#pragma once

#include "Rect.h"
#include "Color.h"
#include "Texture.h"
#include "Font.h"
#include "Vector2.h"

#include <SDL3/SDL.h>

class Graphics
{
public:
	static bool Initialize(SDL_Window* window, Vector2 windowSize);
	static void Finalize();
	static void BeginFrame();
	static void EndFrame();
	static void DrawRect(Rect rect, Color color);
	static void DrawCircle(const Vector2& center, float radius, Color color);
	static void DrawTexture(const Texture& texture, Rect rect);
	static void DrawText(const Font& font, const std::string& text, Vector2 pos, Color color, bool isCenter = true);
	static Vector2 GetWindowSize(float reito);
	// static void DrawTexture(TextureHandle texture, float x, float y);

	static SDL_Renderer* GetRenderer();

private:
	static Vector2 m_windowSize;
	inline static SDL_Renderer* m_renderer = nullptr;
};
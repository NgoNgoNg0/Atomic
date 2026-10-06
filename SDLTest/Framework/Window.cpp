#include <SDL3/SDL.h>
#include "Window.h"
#include "Vector2.h"

Window::Window(const std::string& title, Vector2 size)
	: m_window(nullptr)
	, m_size(size)
{
#ifdef __EMSCRIPTEN__
	// The canvas fills the page and SDL tracks its size; the renderer letterboxes to the logical size.
	m_window = SDL_CreateWindow(title.c_str(), 1280, 720, SDL_WINDOW_RESIZABLE | SDL_WINDOW_HIGH_PIXEL_DENSITY);
	SDL_SetWindowFillDocument(m_window, true);
#else
	m_window = SDL_CreateWindow(title.c_str(), size.x, size.y, SDL_WINDOW_FULLSCREEN | SDL_WINDOW_HIGH_PIXEL_DENSITY);
	SDL_SetWindowAspectRatio(m_window, 16.0f / 9.0f, 16.0f / 9.0f);
#endif
}

Window::~Window()
{
	SDL_DestroyWindow(m_window);
}

SDL_Window* Window::Get() const
{
	return m_window;
}

Vector2 Window::GetWindowSize()
{
	return m_size;
}

#include <SDL3/SDL.h>
#include "Window.h"
#include "Vector2.h"

Window::Window(const std::string& title, Vector2 size)
	: m_window(nullptr)
	, m_size(size)
{
	m_window = SDL_CreateWindow(title.c_str(), size.x, size.y, SDL_WINDOW_RESIZABLE);
	SDL_SetWindowAspectRatio(m_window, 16.0f / 9.0f, 16.0f / 9.0f);
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
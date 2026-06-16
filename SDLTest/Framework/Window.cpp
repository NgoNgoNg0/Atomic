#include <SDL3/SDL.h>
#include "Window.h"

Window::Window(const std::string& title, int width, int height)
	: m_window(nullptr)
{
	m_window = SDL_CreateWindow(title.c_str(), width, height, 0);
}

Window::~Window()
{
	SDL_DestroyWindow(m_window);
}

SDL_Window* Window::Get() const
{
	return m_window;
}
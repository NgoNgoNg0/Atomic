#pragma once
#include <string>

#include <SDL3/SDL.h>

class Window
{
public:
	Window(const std::string& title, int width, int height);
	~Window();

	SDL_Window* Get() const;

private:
	SDL_Window* m_window;

};
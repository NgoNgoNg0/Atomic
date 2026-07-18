#pragma once
#include <string>

#include <SDL3/SDL.h>

#include "Vector2.h"

class Window
{
public:
	Window(const std::string& title, Vector2 size);
	~Window();

	SDL_Window* Get() const;
	Vector2 GetWindowSize();

private:
	SDL_Window* m_window;
	Vector2 m_size;

};
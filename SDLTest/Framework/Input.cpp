#include "Input.h"

#include <array>

#include <SDL3/SDL.h>

void Input::Update()
{
	m_previous = m_current;

	const bool* state = SDL_GetKeyboardState(nullptr);

	for (size_t i = 0; i < static_cast<size_t>(KeyCode::Count); i++)
	{
		m_current[i] = state[g_keyTable[i]];
	}

}

bool Input::GetKey(KeyCode key)
{
	return m_current[static_cast<size_t>(key)];
}

bool Input::GetKeyDown(KeyCode key)
{
	size_t index = static_cast<size_t>(key);
	return m_current[index] && !m_previous[index];
}

bool Input::GetKeyUp(KeyCode key)
{
	size_t index = static_cast<size_t>(key);
	return !m_current[index] && m_previous[index];
}
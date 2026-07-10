#include "Mouse.h"
#include "Graphics.h"

#include <SDL3/SDL.h>

void Mouse::Update()
{
    m_previousButtons = m_currentButtons;

    float x, y;
    m_currentButtons = SDL_GetMouseState(&x, &y);

    SDL_RenderCoordinatesFromWindow(
        Graphics::GetRenderer(),
        x,
        y,
        &x,
        &y
    );

    m_pos = { x, y };
}

Vector2& Mouse::GetPos()
{
    return m_pos;
}

bool Mouse::GetButton(MouseButton button)
{
    return (m_currentButtons &
        ButtonTable[static_cast<size_t>(button)]) != 0;
}

bool Mouse::GetButtonDown(MouseButton button)
{
    SDL_MouseButtonFlags mask =
        ButtonTable[static_cast<size_t>(button)];

    return (m_currentButtons & mask) &&
        !(m_previousButtons & mask);
}

bool Mouse::GetButtonUp(MouseButton button)
{
    SDL_MouseButtonFlags mask =
        ButtonTable[static_cast<size_t>(button)];

    return !(m_currentButtons & mask) &&
        (m_previousButtons & mask);
}
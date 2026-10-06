#include "Mouse.h"
#include "Graphics.h"

#include <SDL3/SDL.h>

void Mouse::HandleEvent(const SDL_Event& event)
{
    if (event.type == SDL_EVENT_MOUSE_BUTTON_DOWN)
    {
        const Uint32 mask = SDL_BUTTON_MASK(event.button.button);
        m_heldButtons |= mask;
        m_pendingDown |= mask;
    }
    else if (event.type == SDL_EVENT_MOUSE_BUTTON_UP)
    {
        const Uint32 mask = SDL_BUTTON_MASK(event.button.button);
        m_heldButtons &= ~mask;
        m_pendingUp |= mask;
    }
}

void Mouse::Update()
{
    m_currentButtons = m_heldButtons;
    m_downButtons = m_pendingDown;
    m_upButtons = m_pendingUp;
    m_pendingDown = 0;
    m_pendingUp = 0;

    float x, y;
    SDL_GetMouseState(&x, &y);

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
    return (m_downButtons &
        ButtonTable[static_cast<size_t>(button)]) != 0;
}

bool Mouse::GetButtonUp(MouseButton button)
{
    return (m_upButtons &
        ButtonTable[static_cast<size_t>(button)]) != 0;
}

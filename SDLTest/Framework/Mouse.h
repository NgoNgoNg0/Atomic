#pragma once

#include <SDL3/SDL.h>

#include "Vector2.h"

enum class MouseButton
{
    Left,
    Middle,
    Right,
    X1,
    X2
};

class Mouse
{
public:
    static void Update();

    static Vector2& GetPos();

    static bool GetButton(MouseButton button);
    static bool GetButtonDown(MouseButton button);
    static bool GetButtonUp(MouseButton button);

private:
    inline static SDL_MouseButtonFlags ButtonTable[] =
    {
        SDL_BUTTON_LMASK,
        SDL_BUTTON_MMASK,
        SDL_BUTTON_RMASK,
        SDL_BUTTON_X1MASK,
        SDL_BUTTON_X2MASK
    };

    inline static Vector2 m_pos = {0.f, 0.f};

    inline static Uint32 m_currentButtons = 0;
    inline static Uint32 m_previousButtons = 0;
};


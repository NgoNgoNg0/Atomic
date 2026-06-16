#include <SDL3/SDL.h>

#include "TestGame.h"

int main()
{
    SDL_Init(SDL_INIT_VIDEO);

    TestGame game;
    game.Run();

    SDL_Quit();

    return 0;
}
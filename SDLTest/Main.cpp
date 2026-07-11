#include <SDL3/SDL.h>
#include <SDL3_image/SDL_image.h>
#include <iostream>

#include "TestGame.h"

int main()
{
    int version = SDL_VERSION;
    std::cout << "SDL3 Version      : " << version << '\n';

    version = IMG_Version();
    std::cout << "SDL_image Version : " << version << '\n';


    std::cout << SDL_GetError() << '\n';
    TestGame game;
    game.Run();

    return 0;

}
﻿#include <iostream>
#include <SDL.h>
#include "Engine.h"


Engine* game = nullptr;

int main(int argc, char* argv[]) 
{
    game = new Engine();
    game->Init("Little Boy Advanture", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        1280, 720, 0);

    while (game->running())
    {
        game->handleEvents();
        game->update();
        game->render();
    }
   
    game->clean();
    delete game;
   
    return 0;
}
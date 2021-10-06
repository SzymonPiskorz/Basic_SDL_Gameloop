#include <iostream>
#include <SDL.h>
#include "Game.h"

int main(int argc, char** argv)
{
    Game* game = new Game();
    game->init("yes", 150,250,800,600, SDL_WINDOW_INPUT_FOCUS);

    while(game->IsRunning())
    {
        game->HandleEvents();
        game->Update();
        game->Render();
    }

    game->CleanUp();

    return 0;
}
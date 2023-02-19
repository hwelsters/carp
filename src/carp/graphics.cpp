#include <SDL.h>

#include "carp/graphics.h"
#include "carp/globals.h"

Graphics::Graphics()
{
    SDL_CreateWindowAndRenderer(GLOBALS::SCREEN_WIDTH, GLOBALS::SCREEN_HEIGHT, 0, &this->window, &this->renderer);
    SDL_SetWindowTitle(this->window, GLOBALS::WINDOW_TITLE);
}

Graphics::~Graphics()
{
    SDL_DestroyWindow(this->window);
    SDL_DestroyRenderer(this->renderer);
    this->window = NULL;
    this->renderer = NULL;
}
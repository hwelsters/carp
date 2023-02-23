#include "carp/graphics.h"
#include "carp/globals.h"

Graphics::Graphics() : window(nullptr, SDL_DestroyWindow),
                       renderer(nullptr, SDL_DestroyRenderer)
{
    this->window.reset(SDL_CreateWindow(GLOBALS::WINDOW_TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, GLOBALS::SCREEN_WIDTH, GLOBALS::SCREEN_HEIGHT, 0));
    this->renderer.reset(SDL_CreateRenderer(this->window.get(), 0, 0));
}

Graphics::~Graphics()
{
    this->window = NULL;
    this->renderer = NULL;
}

void Graphics::render()
{
    this->clear();
    this->flip();
}

void Graphics::clear()
{
    SDL_SetRenderDrawColor(this->renderer.get(), GLOBALS::BACKGROUND_COLOR.r, GLOBALS::BACKGROUND_COLOR.g, GLOBALS::BACKGROUND_COLOR.b, GLOBALS::BACKGROUND_COLOR.a);
    SDL_RenderClear(this->renderer.get());
}

void Graphics::flip()
{
    SDL_RenderPresent(this->renderer.get());
}

void Graphics::blitSurface(SDL_Texture *texture, SDL_Rect source_rect, SDL_Rect destination_rect)
{
    SDL_Rect scaledRect = {
        destination_rect.x * GLOBALS::SPRITE_SCALE,
        destination_rect.y * GLOBALS::SPRITE_SCALE,
        destination_rect.w * GLOBALS::SPRITE_SCALE,
        destination_rect.h * GLOBALS::SPRITE_SCALE};

    SDL_RenderCopy(this->renderer.get(), texture, &source_rect, &destination_rect);
}
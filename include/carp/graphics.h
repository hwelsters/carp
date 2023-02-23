#pragma once
#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL.h>
#include <memory>

class Sprite;

class Graphics
{
public:
    Graphics();
    ~Graphics();
    static Graphics& instance()
    {
        static Graphics* instance = new Graphics();
        return *instance;
    }
    
    void blitSurface(SDL_Texture* texture, SDL_Rect source_rect, SDL_Rect destination_rect);
    void render();

private:
    void clear();
    void flip();
    
    std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window;
    std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> renderer;
};

#endif
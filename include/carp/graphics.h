#pragma once
#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL.h>
#include <memory>
#include <unordered_map>

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

    SDL_Texture* loadTexture(std::string path);
private:
    void clear();
    void flip();

    std::unordered_map<std::string, SDL_Texture*> sprite_sheets;
    
    std::unique_ptr<SDL_Window, decltype(&SDL_DestroyWindow)> window;
    std::unique_ptr<SDL_Renderer, decltype(&SDL_DestroyRenderer)> renderer;
};

#endif
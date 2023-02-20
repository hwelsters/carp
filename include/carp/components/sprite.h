#ifndef SPRITE_H
#define SPRITE_H

#include "carp/component.h"

struct SDL_Rect;

class Sprite : public Component
{
public:
private:
    void update();
    void render();
    
    SDL_Rect* source_rect;
};

#endif
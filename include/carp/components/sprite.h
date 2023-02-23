#ifndef SPRITE_H
#define SPRITE_H

#include <string>

#include "carp/component.h"
#include "carp/globals.h"
#include "carp/entity.h"

struct SDL_Rect;

class Sprite : public Component
{
public:
    Sprite();
    Sprite(std::shared_ptr<Entity> owner, std::string sprite_file_path, SDL_Rect* source_rect, Vector pivot_position);
    ~Sprite();
private:
    void update();
    void render();
    
    SDL_Rect* source_rect;
    SDL_Texture* texture;
    Vector2 pivot_position;
};

#endif
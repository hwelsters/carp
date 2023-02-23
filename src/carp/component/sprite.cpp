#include "carp/sprite.h"
#include "carp/sprite_manager.h"
#include "carp/graphics.h"

Sprite::Sprite() {}

Sprite(std::string sprite_file_path, SDL_Rect *source_rect, Vector pivot_position)
{
    this->texture = SpriteManager::instance().loadTexture();
    this->source_rect = source_rect;
    this->pivot_position = pivot_position;
}

Sprite::~Sprite() {}

void Sprite::update() 
{
}

void Sprite::render() 
{
    SDL_Rect destination_rect = {this->en}
    Graphics::instance().blitSurface(this->texture, this->source_rect)
}

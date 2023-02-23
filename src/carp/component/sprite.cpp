#include "carp/sprite.h"
#include "carp/sprite_manager.h"
#include "carp/graphics.h"

Sprite::Sprite() {}

Sprite(std::shared_ptr<Entity> owner, std::string sprite_file_path, SDL_Rect *source_rect, Vector pivot_position) : Component(owner)
{
    this->texture = SpriteManager::instance().loadTexture();
    this->source_rect = source_rect;
    this->pivot_position = pivot_position;
}

Sprite::~Sprite() {}

void Sprite::update() {}

void Sprite::render()
{
    SDL_Rect destination_rect = {this->owner->position.x, this->owner->position.y, this->source_rect.w, this->source_rect.h};
    Graphics::instance().blitSurface(this->texture, this->source_rect)
}

#include "carp/components/sprite.h"
#include "carp/graphics.h"

Sprite::Sprite(std::shared_ptr<Entity> owner, std::string sprite_file_path, Vector3 source_position, Vector3 source_size) : Component(owner)
{
    this->texture = Graphics::instance().loadTexture(sprite_file_path);
    this->source_position = source_position;
    this->source_size = source_size;
}

Sprite::~Sprite() {}

void Sprite::update() {}

void Sprite::render()
{
    SDL_Rect source_rect = {
        static_cast<int>(this->source_position.x),
        static_cast<int>(this->source_position.y),
        static_cast<int>(this->source_size.x),
        static_cast<int>(this->source_size.y)};

    SDL_Rect destination_rect = {
        static_cast<int>(this->source_position.x), 
        static_cast<int>(this->source_position.y), 
        static_cast<int>(this->owner->get_position().x), 
        static_cast<int>(this->owner->get_position().y)};
    Graphics::instance().blitSurface(this->texture, source_rect, destination_rect);
}

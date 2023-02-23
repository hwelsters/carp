#ifndef SPRITE_H
#define SPRITE_H

#include <string>

#include "carp/component.h"
#include "carp/globals.h"
#include "carp/entity.h"

class Sprite : public Component
{
public:
    Sprite(std::shared_ptr<Entity> owner, std::string sprite_file_path, Vector3 source_position, Vector3 source_size);
    ~Sprite();
private:
    void update() override;
    void render() override;
    
    SDL_Texture* texture;

    Vector3 source_position;
    Vector3 source_size;
};

#endif
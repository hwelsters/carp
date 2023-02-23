#include "player.h"
#include "carp/components/sprite.h"
#include "carp/globals.h"

// TEST
#include <string>

Player::Player(Vector3 position, Vector3 scale) : Entity(position, scale)
{
    this->addComponent(new Sprite(std::shared_ptr<Entity>(this), std::string("actors.png"), Vector3(0, 0, 0), Vector3(32, 32, 0)));
}
#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "carp/entity.h"

class Player : public Entity
{
public:
    Player(Vector3 position, Vector3 scale);
};

#endif
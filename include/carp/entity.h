#pragma once
#ifndef ENTITY_H
#define ENTITY_H

#include <vector>
#include <memory>

#include "carp/globals.h"
#include "carp/component.h"
#include "carp/components/sprite.h"

class Entity
{
public:
    Entity(Vector3 position, Vector3 scale);
    ~Entity();
    
    void update();
    void render();

    Vector3 get_position();
    Vector3 get_scale();

protected:

    void addComponent(Component*);

    std::vector<Component*> component_list;
    Vector3 position;
    Vector3 scale;
};

#endif
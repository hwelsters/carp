#pragma once
#ifndef ENTITY_H
#define ENTITY_H

#include <vector>
#include <memory>

#include "carp/globals.h"
#include "carp/component.h"

class Entity
{
public:
    Entity();
    ~Entity();
    
    void update();
    void render();

    friend Component;
private:
    void addComponent(Component*);

    std::vector<std::unique_ptr<Component>> component_list;
    Vector3 position;
};

#endif
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

    Vector3 getPosition();
    Vector3 getScale();

protected:
    std::shared_ptr<Component> getComponent(COMPONENT_TYPES component_type);
    void addComponent(Component*);

    std::vector<std::shared_ptr<Component>> component_list;
    Vector3 position;
    Vector3 scale;
private:
    template<typename T1, typename T2>
    bool compareTypes(T1, T2);
};

#endif
#pragma once
#ifndef ENTITY_H
#define ENTITY_H

#include <vector>

class Component;
struct Vector3;

class Entity
{
public:
    Entity();
    ~Entity();
    
    virtual void update() = 0;
    virtual void render() = 0;
private:
    void addComponent(Component*);

    std::vector<Component*> component_list;
    Vector3* position;
};

#endif
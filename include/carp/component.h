#pragma once
#ifndef COMPONENT_H
#define COMPONENT_H

#include <memory>
class Entity;

class Component
{
public:
    Component(std::shared_ptr<Entity> owner);
    ~Component();

    virtual void update() = 0;
    virtual void render() = 0;

protected:
    std::shared_ptr<Entity> owner;
};

#endif
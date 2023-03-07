#pragma once
#ifndef COMPONENT_H
#define COMPONENT_H

#include <memory>
#include "carp/globals.h"
class Entity;

class Component
{
public:
    Component();
    Component(std::shared_ptr<Entity> owner);
    ~Component();

    virtual COMPONENT_TYPES getType() = 0;

    virtual void update() = 0;
    virtual void render() = 0;

protected:
    std::shared_ptr<Entity> owner;
};

#endif
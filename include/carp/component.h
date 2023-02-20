#pragma once
#ifndef COMPONENT_H
#define COMPONENT_H

class Entity;

class Component
{
public:
    Component(Entity*);
    ~Component();

    virtual void update() = 0;
    virtual void render() = 0;
private:
};

#endif
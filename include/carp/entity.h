#ifndef ENTITY_H
#define ENTITY_H

#include <vector>

class Component;

class Entity
{
public:
private:
    std::vector<Component*> component_list;
};

#endif
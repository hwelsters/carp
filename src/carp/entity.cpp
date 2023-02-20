#include "carp/entity.h"

Entity::Entity() {}

Entity::~Entity()
{
    for (Component *component : this->component_list)
        delete component;

    this->component_list.clear();
}

void Entity::addComponent(Component *component) { this->component_list.push_back(component); }
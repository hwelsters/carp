#include "carp/entity.h"

Entity::Entity(Vector3 position, Vector3 scale)
{
    this->position = position;
    this->scale = scale;
}

Entity::~Entity() {}

std::shared_ptr<Component> Entity::getComponent(COMPONENT_TYPES component_type)
{
    for (auto component : this->component_list)
    {
        if (component->getType() == component_type) 
        {
            return component;
        }
    }
    return nullptr;
}

void Entity::addComponent(Component *component) { this->component_list.push_back(std::shared_ptr<Component>(component)); }

void Entity::update()
{
    for (auto component : this->component_list)
        component->update();
}

void Entity::render()
{
    for (auto component : this->component_list)
        component->render();
}

Vector3 Entity::getPosition() { return this->position; }

Vector3 Entity::getScale() { return this->scale; }
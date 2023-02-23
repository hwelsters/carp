#include "carp/entity.h"

Entity::Entity(Vector3 position, Vector3 scale)
{
    this->position = position;
    this->scale = scale;
}

Entity::~Entity() {}

void Entity::addComponent(Component *component) { this->component_list.push_back(component); }

void Entity::update() { for (auto component : this->component_list) component->update(); }

void Entity::render() { for (auto component : this->component_list) component->render();}

Vector3 Entity::get_position() { return this->position; }

Vector3 Entity::get_scale() { return this->scale; }
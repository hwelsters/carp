#include "carp/entity.h"

Entity::Entity(Vector3 position, Vector3 scale)
{
    this->position = position;
    this->scale = scale;
}

Entity::~Entity() {}

void Entity::addComponent(Component *component) { this->component_list.push_back(std::unique_ptr<Component>(component)); }

void Entity::update() {}

void Entity::render() {}

Vector3 Entity::get_position() { return this->position; }

Vector3 Entity::get_scale() { return this->scale; }
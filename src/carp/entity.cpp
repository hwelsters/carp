#include "carp/entity.h"

Entity::Entity() {}

Entity::~Entity() {}

void Entity::addComponent(Component *component) { this->component_list.push_back(std::unique_ptr<Component>(component)); }

void Entity::update() {}

void Entity::render() {}
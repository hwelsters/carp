#include <memory>

#include "carp/component.h"

Component::Component() {}
Component::Component(std::shared_ptr<Entity> owner) { this->owner = owner; }
Component::~Component() {}
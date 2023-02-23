#include <memory>

#include "carp/component.h"

Component::Component(std::shared_ptr<Entity> owner) { this->owner = owner; }
Component::~Component() {}
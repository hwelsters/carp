#include "carp/scene.h"
#include "carp/entity.h"

Scene::Scene() {}
Scene::~Scene() {}

void Scene::update() { for (auto entity : this->entity_list) entity->update(); }

void Scene::render() { for (auto entity : this->entity_list) entity->render(); }
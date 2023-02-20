#include "carp/scene.h"
#include "carp/entity.h"

Scene::Scene() {}
Scene::~Scene() {}

void Scene::update() 
{
    for (Entity* entity : this->entity_list) entity->update();
}

void Scene::render()
{
    for (Entity* entity : this->entity_list) entity->render();
}
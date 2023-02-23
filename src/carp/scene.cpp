#include "carp/scene.h"
#include "carp/entity.h"

// TESTING
#include "player.h"

Scene::Scene()
{
    this->entity_list.push_back(new Player(Vector3(100, 100, 0), Vector3(0, 0, 0)));
}

Scene::~Scene() {}

void Scene::update()
{
    for (auto entity : this->entity_list) entity->update();
}

void Scene::render()
{
    for (auto entity : this->entity_list) entity->render();
}
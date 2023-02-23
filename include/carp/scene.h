#pragma once
#ifndef SCENE_H
#define SCENE_H

#include <memory>
#include <vector>

class Entity;

class Scene 
{
public:
    Scene();
    ~Scene();
    void update();
    void render();
private:
    std::vector<std::shared_ptr<Entity>> entity_list;
};

#endif
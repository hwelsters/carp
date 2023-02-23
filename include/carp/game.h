#pragma once
#ifndef GAME_H
#define GAME_H

#include <vector>

class Scene;

class Game
{
public:
    Game();
    ~Game();

    static Game &instance()
    {
        static Game *instance = new Game();
        return *instance;
    }

private:
    void start();
    void processInput();
    void update();
    void render();

    void gameLoop();

    Scene* active_scene;
};

#endif
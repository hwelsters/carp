#pragma once
#ifndef GAME_H
#define GAME_H

#include <vector>

class Graphics;
class Input;
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

    Graphics *graphics;
    Input *input;
    Scene* active_scene;
};

#endif
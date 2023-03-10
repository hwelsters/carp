#pragma once
#ifndef INPUT_H
#define INPUT_H

#include <SDL.h>

#include <memory>
#include <unordered_map>

enum CARP_KEY : unsigned int;

class Input
{
public:
    Input();
    ~Input();
    static Input& instance()
    {
        static Input* instance = new Input();
        return *instance;
    }

    void processInput();
    bool getWindowShouldClose();

    bool isKeyPressed(CARP_KEY);
    bool isKeyReleased(CARP_KEY);
    bool isKeyHeld(CARP_KEY);

private:
    void quitEvent();
    void keyUpEvent(SDL_Scancode);
    void keyDownEvent(SDL_Scancode);

    std::unique_ptr<SDL_Event> event;

    std::unordered_map<SDL_Scancode, bool> pressed_keys;
    std::unordered_map<SDL_Scancode, bool> held_keys;
    std::unordered_map<SDL_Scancode, bool> released_keys;

    bool windowShouldClose;
};

#endif
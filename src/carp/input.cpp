#include "carp/input.h"

#include <SDL.h>

Input::Input()
{
    this->event = new SDL_Event();
    this->windowShouldClose = false;
}

Input::~Input() {}

void Input::update()
{
    this->pressed_keys.clear();
    this->released_keys.clear();

    while (SDL_PollEvent(this->event))
    {
        switch (this->event->type)
        {
        case SDL_QUIT:
            this->quitEvent();
            break;
        case SDL_KEYDOWN:
            this->keyDownEvent(this->event->key.keysym.scancode);
            break;
        case SDL_KEYUP:
            this->keyUpEvent(this->event->key.keysym.scancode);
            break;
        }
    }
}

void Input::quitEvent() { this->windowShouldClose = true; }
bool Input::getWindowShouldClose() { return this->windowShouldClose; }
bool Input::isKeyPressed(CARP_KEY carp_key) { return this->pressed_keys[static_cast<SDL_Scancode>(carp_key)]; }
bool Input::isKeyReleased(CARP_KEY carp_key) { return this->released_keys[static_cast<SDL_Scancode>(carp_key)]; }
bool Input::isKeyHeld(CARP_KEY carp_key) { return this->held_keys[static_cast<SDL_Scancode>(carp_key)]; }

void Input::keyDownEvent(SDL_Scancode scancode)
{
    this->pressed_keys[scancode] = true;
    this->held_keys[scancode] = true;
    printf("KEY DOWN %d\n", scancode);
}

void Input::keyUpEvent(SDL_Scancode scancode)
{
    this->released_keys[scancode] = true;
    this->held_keys[scancode] = false;
    printf("KEY UP %d\n", scancode);
}
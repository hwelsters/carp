#pragma once
#ifndef GLOBALS_H
#define GLOBALS_H

#include <iostream>

namespace GLOBALS
{
    static const int SCREEN_WIDTH = 640;
    static const int SCREEN_HEIGHT = 480;
    static const int FRAMES_PER_SECOND = 60;
    static const char *WINDOW_TITLE = "epic thing";
}

enum CARP_KEY : unsigned int
{
    CARP_SPACE = SDL_SCANCODE_SPACE,
    CARP_W = SDL_SCANCODE_W,
    CARP_A = SDL_SCANCODE_A,
    CARP_S = SDL_SCANCODE_S,
    CARP_D = SDL_SCANCODE_D,
    CARP_UP = SDL_SCANCODE_UP,
    CARP_DOWN = SDL_SCANCODE_DOWN,
    CARP_LEFT = SDL_SCANCODE_LEFT,
    CARP_RIGHT = SDL_SCANCODE_RIGHT,
};

struct Vector3
{
    float x;
    float y;
    float z;

    Vector3() : x(0), y(0), z(0) {}
    Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

    // Operator overloading
    Vector3 operator+(Vector3 const &vector3) { return Vector3(this->x + vector3.x, this->y + vector3.y, this->z + vector3.z); }
    Vector3 operator-(Vector3 const &vector3) { return Vector3(this->x - vector3.x, this->y - vector3.y, this->z - vector3.z); }
    friend std::ostream &operator<<(std::ostream &os, const Vector3 &vector3) { os << "Vector3 :: " << vector3.x << " :: " << vector3.y << " :: " << vector3.z << "\n"; }
};

#endif
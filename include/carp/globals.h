#ifndef GLOBALS_H
#define GLOBALS_H

#include <string>

enum CARP_KEY
{
    CARP_SPACE  = SDL_SCANCODE_SPACE,
    CARP_W      = SDL_SCANCODE_W,
    CARP_A      = SDL_SCANCODE_A,
    CARP_S      = SDL_SCANCODE_S,
    CARP_D      = SDL_SCANCODE_D,
    CARP_UP     = SDL_SCANCODE_UP,
    CARP_DOWN   = SDL_SCANCODE_DOWN,
    CARP_LEFT   = SDL_SCANCODE_LEFT,
    CARP_RIGHT  = SDL_SCANCODE_RIGHT,
};

namespace GLOBALS
{
    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;
    const int FRAMES_PER_SECOND = 60;
    const char *WINDOW_TITLE = "epic thing";
}

#endif
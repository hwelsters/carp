#include <iostream>

#include "carp/game.h"
#include "carp/graphics.h"
#include "carp/input.h"
#include "carp/globals.h"
#include "carp/scene.h"
#include "carp/timer.h"

Game::Game()
{
    // TESTING
    this->active_scene = new Scene();
    this->gameLoop();
}

Game::~Game() 
{
}

void Game::start() {}

void Game::processInput() 
{
    Input::instance().processInput();
}

void Game::update()
{
    this->active_scene->update();
}

void Game::render() 
{
    Graphics::instance().clear();
    
    this->active_scene->render();

    Graphics::instance().flip();
}

void Game::gameLoop()
{
    Timer cap_timer;

    this->start();
    while (!Input::instance().getWindowShouldClose())
    {
        cap_timer.start();

        this->processInput();
        this->update();
        this->render();

        // FPS capping
        int frame_ticks = cap_timer.get_ticks();
        if (frame_ticks < GLOBALS::SCREEN_TICKS_PER_FRAME) SDL_Delay(GLOBALS::SCREEN_TICKS_PER_FRAME - frame_ticks);
    }
}
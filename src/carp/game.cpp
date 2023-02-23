#include <iostream>

#include "carp/game.h"
#include "carp/graphics.h"
#include "carp/input.h"
#include "carp/globals.h"
#include "carp/scene.h"

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
    this->active_scene->render();
    Graphics::instance().render();
}

void Game::gameLoop()
{
    this->start();
    while (!Input::instance().getWindowShouldClose())
    {
        this->processInput();
        this->update();
        this->render();
    }
}
#include "carp/game.h"
#include "carp/graphics.h"
#include "carp/input.h"

Game::Game()
{
    this->graphics = new Graphics();
    this->input = new Input();
    this->update();
}

Game::~Game() {}

void Game::start() {}

void Game::processInput() {}

void Game::update()
{
    while (!this->input->getWindowShouldClose())
    {
        this->input->update();
    }
}

void Game::render()
{
    
}
#include <iostream>

#include "carp/game.h"
#include "carp/graphics.h"
#include "carp/input.h"
#include "carp/globals.h"

Game::Game()
{
    this->graphics = new Graphics();
    this->input = new Input();
    this->gameLoop();
}

Game::~Game() 
{
    delete this->graphics;
    delete this->input;
}

void Game::start() {}

void Game::processInput() 
{
    this->input->processInput();
}

void Game::update()
{
}

void Game::render() 
{
    this->graphics->render();
}

void Game::gameLoop()
{
    this->start();
    while (!this->input->getWindowShouldClose())
    {
        this->processInput();
        this->update();
        this->render();
    }
}
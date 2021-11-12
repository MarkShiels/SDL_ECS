#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{
   HealthComponent m_hc;
   m_player.addComponent(m_hc);
   m_hs.addEntity(m_player);
}
    
Game::~Game()
{

}
    
void Game::run()
{
    m_gameIsRunning = true;
    while (m_gameIsRunning)
    {
        processEvents();
        update();
        render();
    }
}

void Game::processEvents()
{
  
}

void Game::update()
{
    m_hs.update();
}

void Game::render()
{

}

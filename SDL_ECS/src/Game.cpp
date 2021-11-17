#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{
    HealthComponent     m_hcP;
    HealthComponent     m_hcV;
    HealthComponent     m_hcC;

    PositionComponent   m_pcP;
    PositionComponent   m_pcV;
    PositionComponent   m_pcC;
    PositionComponent   m_pcD;

    InputComponent      m_icP;

    m_player.addComponent(m_hcP);
    m_player.addComponent(m_pcP);
    m_player.addComponent(m_icP);

    m_villain.addComponent(m_hcV);
    m_villain.addComponent(m_pcV);

    m_cortana.addComponent(m_hcC);
    m_cortana.addComponent(m_pcC);

    m_dinky_Di.addComponent(m_pcD);

    m_hs.addEntity(m_player);
    m_hs.addEntity(m_villain);
    m_hs.addEntity(m_cortana);

    m_ps.addEntity(m_player);
    m_ps.addEntity(m_villain);
    m_ps.addEntity(m_cortana);
    m_ps.addEntity(m_dinky_Di);
    
    m_is.addEntity(m_player);

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
    m_is.update();
    m_ps.update();
}

void Game::render()
{

}

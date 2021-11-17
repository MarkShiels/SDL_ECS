#include "../include/Game.h"

Game::Game() :
    m_gameIsRunning{ false }
{

     if (SDL_Init(SDL_INIT_VIDEO) < 0) { // also initialises the events subsystem
        std::cout << "Failed to init SDL.\n";      
    }

    SDL_Window *window = SDL_CreateWindow(
        "Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
        100, 100, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);

    if(!window) {
        std::cout << "Failed to create window.\n";}

    load();
    
}

void Game::load()
{
    HealthComponent     m_hcP;
    HealthComponent     m_hcV;
    HealthComponent     m_hcC;

    PositionComponent   m_pcP;
    PositionComponent   m_pcV;
    PositionComponent   m_pcC;
    PositionComponent   m_pcD;

    InputComponent      m_icP;

    m_player.setID(11);
    m_villain.setID(55);
    m_cortana.setID(77);
    m_dinky_Di.setID(99);

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
    SDL_Event event;
    m_gameIsRunning = true;
    while (m_gameIsRunning)
    {
        processEvents(event);
        update();
        render();
    }
}

void Game::processEvents(SDL_Event event)
{  
  
    while (SDL_PollEvent(&event) != 0)
    { 
        if(event.key.keysym.sym == SDLK_h)
        {
            m_hs.update();
        }
        else if(event.key.keysym.sym == SDLK_p)
        {
            m_ps.update();
        }
        else if(event.key.keysym.sym == SDLK_i)
        {
            m_is.update();
        }   
    }
}

void Game::update()
{
    // m_hs.update();
    // m_is.update();
    // m_ps.update();
}

void Game::render()
{

}

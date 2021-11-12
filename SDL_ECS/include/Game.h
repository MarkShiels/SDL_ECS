#include <SDL2/SDL.h>
#include <iostream>
#include "../include/HealthSystem.h"

class Game
{
public:

    Game();
    ~Game();
    void run();

private:

    void processEvents();
    void update();
    void render();

    bool m_gameIsRunning;


    HealthSystem    m_hs;
    Entity          m_player;
};
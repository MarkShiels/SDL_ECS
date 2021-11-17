#include <SDL2/SDL.h>
#include <iostream>
#include "../include/HealthSystem.h"
#include "../include/PositionSystem.h"
#include "../include/InputSystem.h"

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
    PositionSystem  m_ps;
    InputSystem     m_is;

    Entity          m_player, m_villain, m_cortana, m_dinky_Di;
};
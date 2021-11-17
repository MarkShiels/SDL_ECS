#include "../include/Entity.h"


class InputSystem
{

public:

InputSystem(){};
~InputSystem(){};


void addEntity(Entity t_ent) {m_entities.push_back(t_ent);};
void update()
{
     for (Entity e : m_entities)
    {
      std::cout << e.getID() << " Input update" << std::endl;
    }
};


private:

std::vector<Entity> m_entities;


};

#include "../include/Entity.h"


class PositionSystem
{

public:

PositionSystem(){};
~PositionSystem(){};


void addEntity(Entity t_ent) {m_entities.push_back(t_ent);};
void update()
{
     for (Entity e : m_entities)
    {
      std::cout << e.getID() << " " << e.getPositionCom().getPosition().first <<  " ,"  << e.getPositionCom().getPosition().second <<  std::endl;
    }
};


private:

std::vector<Entity> m_entities;


};

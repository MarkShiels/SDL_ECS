#include "../include/Entity.h"


class HealthSystem
{

public:

HealthSystem(){};
~HealthSystem(){};


void addEntity(Entity t_ent) {m_entities.push_back(t_ent);};
void update()
{
    for (Entity e : m_entities)
    {
      std::cout << e.getID() << " " << e.getHealthCom().getHealth() << std::endl;
    }
};


private:

std::vector<Entity> m_entities;


};

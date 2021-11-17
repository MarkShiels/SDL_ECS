#include "../include/Entity.h"


class PositionSystem
{

public:

PositionSystem(){};
~PositionSystem(){};


void addEntity(Entity t_ent) {m_entities.push_back(t_ent);};
void update()
{
    
};


private:

std::vector<Entity> m_entities;


};

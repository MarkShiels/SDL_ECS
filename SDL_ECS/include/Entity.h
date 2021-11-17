#ifndef H_ENTITY
#define H_ENTITY
#include <vector> 
#include "../include/HealthComponent.h"
#include "../include/PositionComponent.h"
#include "../include/InputComponent.h"

class Entity 
{
public:

    Entity(){};
    ~Entity(){};

    std::vector<Component>  getComponents() {return m_components;};
    void                    addComponent(Component t_comp) {m_components.push_back(t_comp);};
    void                    removeComponent();
    void                    setID(int t_id) {m_id = t_id;};
    int                     getID() {return m_id;};

private:

    std::vector<Component> m_components;
    int m_id;


};
#endif

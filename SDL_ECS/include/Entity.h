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
    void                    removeComponent();
    void                    setID(int t_id) {m_id = t_id;};
    int                     getID() {return m_id;};
    
    void                    addComponent(HealthComponent t_hComp) {m_components.push_back(t_hComp); m_health = t_hComp;};
    void                    addComponent(PositionComponent t_pComp) {m_components.push_back(t_pComp); m_position = t_pComp;};
    void                    addComponent(InputComponent t_iComp) {m_components.push_back(t_iComp); m_input = t_iComp;};

    HealthComponent         getHealthCom(){return m_health;};
    PositionComponent       getPositionCom(){return m_position;};
    InputComponent          getInputCom(){return m_input;};


private:

    std::vector<Component> m_components;
    HealthComponent m_health;
    PositionComponent m_position;
    InputComponent m_input;
    int m_id;


};
#endif

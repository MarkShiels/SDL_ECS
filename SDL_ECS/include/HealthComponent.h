#include "../include/Component.h"

class HealthComponent : public Component
{

public:

    HealthComponent() : m_health(100){};

    int getHealth() {return m_health;};
    void setHealth(int t_health) {m_health = t_health;};
    std::string getType(){return type;};

private:

    int m_health;
    std::string type{"Health"};
    
};
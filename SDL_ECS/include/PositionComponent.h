#include "../include/Component.h"
#include <utility>

class PositionComponent : public Component
{

public:

    PositionComponent() : m_pos(0,0){};
    
    std::pair<int,int>  getPosition(){return m_pos;};
    void                setPosition(int t_x, int t_y) 
                                    {m_pos.first = t_x;
                                        m_pos.second = t_y;}; 
    


private:

    std::pair<int, int> m_pos;
};
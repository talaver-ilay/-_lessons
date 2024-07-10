#pragma once

#include <iostream>
#include "person.h"

class Player: public Person{
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
    public:
        Player() = default;
        Player(std::string& game_param);
        ~Player();
    private:
        std::string m_game{"None"};
};

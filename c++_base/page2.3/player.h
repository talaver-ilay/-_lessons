#pragma once

#include <iostream>
#include "person.h"

class Player: public Person{
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
    public:
        Player() = default;
        Player(std::string game_param, std::string first_name, std::string last_name);
    private:
        std::string m_game{"None"};
};

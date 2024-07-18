#include "player.h"


Player::Player(std::string game_param, std::string first_name, std::string last_name): m_game(game_param){
    this->first_name = first_name; // only if person protected
    this->last_name = last_name;

}
std::ostream& operator<<(std::ostream& out, const Player& player){
        out<< "Player : [ game : "<<player.m_game<<" names : "<<" "<<player.get_first_name()<<
                                                                " "<<player.get_last_name()<<"]";
        return out;
    }

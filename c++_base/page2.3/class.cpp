#include <iostream>
#include "player.h"
#include "person.h"

int main(int argc, char **argv){
    Person person("Vsya","Pupkin");
    Player player("Football","Lori","Tront");
    std::cout<<player<<std::endl;
    return 0;
}

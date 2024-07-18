#include <iostream>
#include "cylinder.h"

int main(int argc, char **argv){
    Cylinder cylinder1;
    std::cout<<cylinder1.volume()<<std::endl;
    Cylinder cylinder2(2,2);
    std::cout<<cylinder2.volume()<<std::endl;
    cylinder1.set_base_height(3);
    cylinder1.set_base_radius(3);
    std::cout<<cylinder1.volume()<<std::endl;
    std::cout<<cylinder1.get_base_height()<<std::endl;
    std::cout<<cylinder1.get_base_radius()<<std::endl;

    Cylinder* cylinder3 = new Cylinder(4,4);
    std::cout<<cylinder3->volume()<<std::endl;
    std::cout<<(*cylinder3).volume()<<std::endl;
    delete cylinder3;
    return 0;
}

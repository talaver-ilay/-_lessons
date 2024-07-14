#include <iostream>
#include "derived.h"
#include "base.h"

int main(int argc,char** argv){
    Base* b = new Derived;
    // std::cout<<b->get_value()<<std::endl;
    Base b1; // нельзя создать потомка если в классе виртульный метод равен "= 0"
    delete b;
    return 0;
}

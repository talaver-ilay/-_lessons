#include <iostream>
#include "engineer.h"
#include "civilengineer.h"
#include "person.h"

int main(int argc, char **argv){

    Engineer engineer("Pedro Conisa",22,"Maxico",4);
    std::cout<<engineer<<std::endl<<"\n";
    int x{25};
    engineer.print(x);
    // engineer.Person::print();
    return 0;
}

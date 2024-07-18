#include <iostream>
#include "engineer.h"
#include "civilengineer.h"
#include "person.h"

int main(int argc, char **argv){
    Person person1("John Snow",22,"Pervomay");
    Engineer engineer;
    std::cout<<person1<<std::endl;
    std::cout<<engineer<<std::endl;
    return 0;
}

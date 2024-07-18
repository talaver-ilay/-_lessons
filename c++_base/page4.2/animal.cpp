 #include "animal.h"
 
Animal::Animal(const std::string& description)
: description(description){}

Animal::~Animal(){
    std::cout<<"Animal desctructor called"<<std::endl;
}
#include "dog.h"

Dog::Dog(){
    dog_name = "None";
    dog_breed = "None";
    dog_age = new int;
    *dog_age = 0;
}

Dog::Dog(std::string name_param, std::string breed_param, int age_param){
    dog_name = name_param;
    dog_breed = breed_param;
    dog_age = new int;
    *dog_age = age_param;
}
Dog::~Dog(){
    delete dog_age;
    std::cout<<"Dog destructor called for "<<dog_name<<std::endl;
}

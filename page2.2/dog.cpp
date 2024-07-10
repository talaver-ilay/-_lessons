#include "dog.h"

Dog::Dog(){
    dog_name = "None";
    dog_breed = "None";
    dog_age = new uint;
    *dog_age = 0;

}

Dog::Dog(std::string dog_name, std::string dog_breed, int dog_age){
    this->dog_name = dog_name;
    this->dog_breed = dog_breed;
    this->dog_age = new uint;
    (*this->dog_age) = dog_age;
    std::cout<<"Dog constructor called for "<<this->dog_name<<" "<<this<<'\n';
}
Dog::~Dog(){
    delete dog_age;
    std::cout<<"Dog destructor called for "<<dog_name<<" "<<this<<std::endl;
}

// Dog* Dog::set_age(const uint& dog_age){
//     *(this->dog_age) = dog_age;
//     return this;
// }

// Dog* Dog::set_name(const std::string& dog_name){
//     this->dog_name = dog_name;
//     return this;
// }

// Dog* Dog::set_breed(const std::string& dog_breed){
//     this->dog_breed = dog_breed;
//     return this;
// }
Dog& Dog::set_age(const uint& dog_age){
    *(this->dog_age) = dog_age;
    return *this;
}

Dog& Dog::set_name(const std::string& dog_name){
    this->dog_name = dog_name;
    return *this;
}

Dog& Dog::set_breed(const std::string& dog_breed){
    this->dog_breed = dog_breed;
    return *this;
}
void Dog::print(){
    std::cout<<"Name: "<<dog_name<<std::endl;
    std::cout<<"Breed: "<<dog_breed<<std::endl;
    std::cout<<"Age: "<<*dog_age<<'\n'<<std::endl;
}
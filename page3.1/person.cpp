#include "person.h"

Person::Person(const std::string_view& full_name, int age, 
               const std::string& address): 
               fullname{full_name}, age{age},address{address}{}
Person::Person(){
    std::cout<<"Default constructor for Person called..."<<std::endl;   
}

std::string Person::get_full_name(){
    return this->fullname;
};
int Person::get_age(){
    return this->age;
};
std::string Person::get_address(){
    return this->address;
};

std::ostream& operator<<(std::ostream& out, Person& person){
    out << "Person [Full name : "<<person.get_full_name()<<
           ", age : "<<person.get_age()<<
           ", address : "<<person.get_address()<<"]";
    return out;
}


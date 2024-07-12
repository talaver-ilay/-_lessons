#include "person.h"

Person::Person(const std::string_view& full_name, int age, 
               const std::string& address): 
               fullname{full_name}, age{age},address{address}{
    std::cout<<"Custom constructor for Person called..."<<std::endl;   
}
Person::Person(){
    std::cout<<"Default constructor for Person called..."<<std::endl;   
}

Person::Person(const Person& source):fullname{source.fullname},age{source.age},address{source.address}{
    std::cout<<"Person Copy constructor called..."<<std::endl;   
}

std::string Person::get_full_name()const{
    return this->fullname;
};
int Person::get_age()const{
    return this->age+1;
};
std::string Person::get_address()const{
    return this->address;
};

std::ostream& operator<<(std::ostream& out,const Person& person){
    out << "Person [Full name : "<<person.get_full_name()<<
           ", age : "<<person.get_age()<<
           ", address : "<<person.get_address()<<"]";
    return out;
}

void Person::set_full_name(std::string& fullname){
    this->fullname = fullname;
}
void Person::set_age(int& age){
    this->age = age;
}
void Person::set_address(std::string& address){
    this->address = address;
}

void Person::print(double& x)const{
    std::cout<<x<<std::endl;
    std::cout<<"Hallo Person"<<std::endl;
}
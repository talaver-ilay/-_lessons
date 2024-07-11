#include "person.h"

Person::Person(const std::string_view& full_name, int age, 
               const std::string& address): 
               m_full_name{full_name}, m_age{age},m_address{address}
{
    
}

std::string Person::get_full_name(){
    return this->m_full_name;
};
int Person::get_age(){
    return this->m_age;
};
std::string Person::get_address(){
    return this->m_address;
};

std::ostream& operator<<(std::ostream& out, Person& person){
    out << "Person [Full name : "<<person.get_full_name()<<
           ", age : "<<person.get_age()<<
           ", address : "<<person.get_address()<<"]";
    return out;
}


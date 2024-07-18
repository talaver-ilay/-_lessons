#include "person.h"

    Person::Person(){std::cout<<"Constructor "<<this->first_name<<"\n";};

    Person::Person(std::string first_name, std::string last_name){
        this->first_name = first_name;
        this->last_name = last_name;
        std::cout<<"Constructor "<<this->first_name<<"\n";
    }
    
    Person::~Person(){std::cout<<"Destructor "<<this->first_name<<"\n";}

    std::string Person::set_first_name(std::string& first_name){
        this->first_name = first_name;
        return this->first_name;
    }
    std::string Person::set_last_name(std::string& last_name){
        this->last_name = last_name;
        return this->last_name;
    }
    std::string Person::get_first_name(void)const{
        return first_name;
    }
    std::string Person::get_last_name(void)const{
        return last_name;
    }
    std::ostream& operator<<(std::ostream& out, const Person& person){
        out<< "Person [ "<<person.first_name<<" "<<person.last_name<<"]";
        return out;
    }
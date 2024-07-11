#pragma once

#include <iostream>
#include "person.h"

class Engineer: private Person{
    friend std::ostream& operator<<(std::ostream& out, Engineer& engineer);
    public:
        Engineer(){};
        ~Engineer(){};
        int get_contruct_count()const;
    protected:
        using Person::get_full_name; // открыть доступ из Person
        using Person::get_age;
        using Person::get_address;
    public:
        using Person::m_full_name;
    protected:
        int contruct_count{0}; 
};

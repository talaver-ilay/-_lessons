#pragma once

#include <iostream>
#include "person.h"

class Engineer: public Person{
    using Person::Person;
    friend std::ostream& operator<<(std::ostream& out,const Engineer& engineer);
    public:
         Engineer(const std::string& fullname,
                 int age,
                 const std::string address, 
                 int contruct_count);
        Engineer(const Engineer& source);
        ~Engineer(){};
        using Person::print;
        void print(int& x)const;
        int get_contruct_count()const;
        void set_contruct_count(int& count);
        
    private:
        int contruct_count{0};
};

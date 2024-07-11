#pragma once

#include <iostream>
#include "person.h"

class Engineer: public Person{
    friend std::ostream& operator<<(std::ostream& out, Engineer& engineer);
    public:
        Engineer();
        Engineer(const std::string& fullname,
                int age,
                const std::string address, 
                int contruct_count);

        ~Engineer(){};
        int get_contruct_count()const;
        void set_contruct_count(int& count);
    private:
        int contruct_count{0};
};

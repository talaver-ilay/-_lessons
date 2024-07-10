#pragma once

#include <iostream>

class Person{
    friend std::ostream& operator<<(std::ostream& out, const Person& Person);
    public:
        Person();
        Person(std::string& first_name, std::string& las_name);
        ~Person();
        std::string set_first_name( std::string& first_name);
        std::string set_last_name( std::string& last_name);
        std::string get_first_name(void)const;
        std::string get_last_name(void)const;
    private:
        std::string first_name{"Mysterious"};
        std::string last_name{"Person"};
};

#pragma once
#include <iostream>

class Person{
    friend std::ostream& operator<<(std::ostream& out, Person& person);
    public:
        Person() = default;
        Person(const std::string_view& full_name, int age, const std::string& address);
        ~Person(){};
        std::string get_full_name();
        int get_age();
        std::string get_address();
    public:
        std::string m_full_name{"None"};
    protected:
        int m_age{0}; 
    private:
        std::string m_address{"None"};

};

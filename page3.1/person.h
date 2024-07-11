#pragma once
#include <iostream>

class Person{
    friend std::ostream& operator<<(std::ostream& out, Person& person);
    public:
        Person();
        Person(const std::string_view& full_name, int age, const std::string& address);
        ~Person(){};

        std::string get_full_name();
        int get_age();
        std::string get_address();

        void set_full_name(std::string fullname);
        void set_age(int age);
        void set_address(std::string address);

    private:
        std::string fullname{"None"};
        int age{0}; 
        std::string address{"None"};

};

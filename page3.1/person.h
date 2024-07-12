#pragma once
#include <iostream>

class Person{
    friend std::ostream& operator<<(std::ostream& out,const Person& person);
    public:
        Person();
        Person(const std::string_view& full_name, int age, const std::string& address);
        Person(const Person& source); // Copy constructor не наследуеться
        ~Person(){};

        void print(double& x)const;

        std::string get_full_name()const;
        int get_age ()const;
        std::string get_address()const;

        void set_full_name(std::string& fullname);
        void set_age(int& age);
        void set_address(std::string& address);

    private:
        std::string fullname{"None"};
        int age{0}; 
        std::string address{"None"};

};

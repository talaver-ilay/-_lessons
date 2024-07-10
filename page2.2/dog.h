#pragma once

#include <iostream>

class Dog{
    public:
        Dog();
        Dog(std::string name_param, std::string breed_param, int age_param);
        ~Dog();
        // Dog* set_name(const std::string& name);
        // Dog* set_breed(const std::string& breed);
        // Dog* set_age(const uint& age);
        Dog& set_name(const std::string& name);
        Dog& set_breed(const std::string& breed);
        Dog& set_age(const uint& age);
        void print();
    private:
        std::string dog_name;
        std::string dog_breed;
        uint* dog_age;

};
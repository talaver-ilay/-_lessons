#pragma once

#include <iostream>

class Dog{
    public:
        Dog();
        Dog(std::string name_param, std::string breed_param, int age_param);
        ~Dog();
    private:
        std::string dog_name;
        std::string dog_breed;
        int* dog_age;

};
#pragma once 
#include <iostream>
 class Animal{
    public:
        Animal();
        Animal(const std::string& description);
        virtual ~Animal();
        virtual void breathe()const{
            std::cout<<"Animal::breathe() called for : "<<description<<std::endl;
        }
    protected:
        std::string description;
 };
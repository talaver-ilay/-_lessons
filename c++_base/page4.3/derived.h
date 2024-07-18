#pragma once
#include <iostream>
#include "base.h"

class Derived: public Base{
    public:
        Derived():Base(){
            std::cout<<"Derived constructor called"<<std::endl;
        }
        virtual ~Derived(){
            std::cout<<"Derived destructor called"<<std::endl;
        };
        virtual void setup() override{
            std::cout<<"Derived::setup() called "<<std::endl;
            value = 100;
        }
        virtual void clean_up()override{
            std::cout<<"Derived::clean_up() called"<<std::endl;
        };
        virtual void get() const override{
            std::cout<<"Hallo"<<std::endl;
        };
};
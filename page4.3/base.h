#pragma once
#include <iostream>

class Base{
    public:
        Base(){
            std::cout<<"Base constructor called"<<std::endl;
            this->setup();
            // setup();
        }
        virtual ~Base(){
            std::cout<<"Base destructor called"<<std::endl;
        };
        virtual void setup(){
            std::cout<<"Base::setup() called"<<std::endl;
            value  = 10;
        }
        virtual void clean_up(){
            std::cout<<"Base::clean_up() called"<<std::endl;
        };
        int get_value()const{
            return value;
        }
        virtual void get()const = 0;
    protected:
        int value;



}
;
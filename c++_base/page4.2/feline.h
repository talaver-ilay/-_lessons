#pragma once
#include <iostream>
#include "animal.h"

class Feline: public Animal{
    public:
        Feline();
        Feline(const std::string& fur_style, const std::string& decription);
        ~Feline();
        virtual void run() const{
            std::cout<<"Feline "<<description<<" is running"<<std::endl;
        }
        void do_some_feline_thingy(){
            std::cout<<"Doing some feline thinky..."<<std::endl;
        }
        std::string fur_style;
};

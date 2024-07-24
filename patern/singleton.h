#pragma once
#include <iostream>
class Singleton{
    public:
        static Singleton* Initstate();
    protected:
        Singleton(){
            std::cout<<"Constructor called"<<std::endl;
        };
        static Singleton* _instance;
};
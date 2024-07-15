#pragma once
#include <iostream>
class Singleton{
    public:
        static Singleton* Initstate();
    protected:
        Singleton(){
            std::cout<<"Constructor called"<<std::endl;
        };
    protected:
        static Singleton* _instance;
};
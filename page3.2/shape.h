#pragma once 
#include <iostream> 
class Shape{
    public:
        Shape();
        Shape(const std::string& description);
        ~Shape();
        void draw()const;
    protected:
        std::string description{""};

}; 

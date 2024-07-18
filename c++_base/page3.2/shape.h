#pragma once 
#include <iostream> 
class Shape{
    public:
        Shape();
        Shape(const std::string& description);
        virtual ~Shape();
        virtual void draw()const; 
    protected:
        std::string description{""};

}; 

#pragma once 
#include <iostream> 
class Shape{
    public:
        Shape();
        Shape(const std::string& description);
        virtual ~Shape();
        virtual void draw()const; 
        virtual void draw(int color)const; 
    protected:
        std::string description{""};

}; 

#pragma once 
#include <iostream> 
#include "shape.h" 

class Oval:public Shape{
    using Shape::Shape;
    public:
        ~Oval();
        Oval(double x_radius, double y_radius, const std::string& description);
        void draw()const;
    private:
        double x_radius{0.0};
        double y_radius{0.0};
    protected:
        double get_x_rad()const;
        double get_y_rad()const;
}; 

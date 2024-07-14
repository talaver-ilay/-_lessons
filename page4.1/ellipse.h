#pragma once
#include <iostream> 
#include "shape.h"
class Ellipse:public Shape{
    public: 
        Ellipse();
        Ellipse(double x_radius,double y_radius, const std::string& description);
        virtual ~Ellipse();
        virtual int get_count()const override{
            return count;
        }
        static int count;
    private:
        double x_radius; 
        double y_radius;
};
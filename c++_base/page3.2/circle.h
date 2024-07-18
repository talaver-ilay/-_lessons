#pragma once 
#include <iostream> 
#include "oval.h"

class Circle:public Oval{
    using Oval::Oval;
    public:
        Circle(double radius,const std::string& description);
        ~Circle();
        void draw()const;
        
    

}; 

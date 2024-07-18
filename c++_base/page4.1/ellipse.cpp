#include "ellipse.h" 
    Ellipse::Ellipse(double x_radius,double y_radius,
                    const std::string& description)
                    :Shape(description),x_radius(x_radius),y_radius(y_radius){++count;}
    
    Ellipse::Ellipse():Ellipse(0.0,0.0,"NoDescription"){}
    Ellipse::~Ellipse(){--count;}
    int Ellipse::count{0};
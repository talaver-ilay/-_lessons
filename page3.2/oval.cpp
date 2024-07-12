#include "oval.h"
Oval::Oval(double x_radius, double y_radius, const std::string& description)
:Shape(description),x_radius(x_radius),y_radius(y_radius){
    std::cout<<"Oval custom constructor called .."<<std::endl;
}
Oval::~Oval(){
    std::cout<<"Oval default destructor called .."<<std::endl;
}
void Oval::draw()const{
    std::cout<<"Oval::draw() called. Drawing "<<description<<" with x_radius : "<<x_radius<<" and y_radius : "<<y_radius<<std::endl;
}
double Oval::get_x_rad()const{
    return x_radius;
}
double Oval::get_y_rad()const{
    return y_radius;
}
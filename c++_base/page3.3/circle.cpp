#include "circle.h"
Circle::Circle(double radius,const std::string& description)
:Oval(radius,radius,description){
    //  std::cout<<"Circle custom constructor called .."<<std::endl;
}
void Circle::draw()const{
    std::cout<<"Circle::draw() called. Drwaing "<<description<<
    " with radius : "<<get_x_rad()<<std::endl;
}
Circle::~Circle(){
    // std::cout<<"Circle default destructor called .."<<std::endl;
}
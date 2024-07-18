#include "shape.h"

Shape::Shape(){
    std::cout<<"Shape default constructor called .."<<std::endl;
}
Shape::Shape(const std::string& description):description(description){
    // std::cout<<"Shape custom constructor called .."<<std::endl;
}   
Shape::~Shape(){
    // std::cout<<"Shape default destructor called .."<<std::endl;
}
void Shape::draw()const{
        std::cout<<"Shape::draw() called. Drawing "<<description<<std::endl;
}
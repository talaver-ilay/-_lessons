#include <iostream> 
// #include <numbers> 
#include "cylinder.h"
#include "constants.h"

Cylinder::Cylinder() = default; 
Cylinder::Cylinder(double radius_param,double height_param){
    base_radius = radius_param;
    height = height_param;
}
double Cylinder::volume(){
            return PI * base_radius* base_radius * height;
        }
void Cylinder::set_base_radius(double radius_param){
    base_radius = radius_param;
}
void Cylinder::set_base_height(double height_param){
    height = height_param;
}
double Cylinder::get_base_radius(){
    return base_radius;
}
double Cylinder::get_base_height(){
    return height;
}


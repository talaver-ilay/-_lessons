#include <iostream> 
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(int argc,char** argv){
    Shape shape("Shape");
    shape.draw();
    std::cout<<"\n";
    Oval oval(2,3.5,"Oval");
    oval.draw();
    std::cout<<"\n";
    Circle circle(3.3,"Circle");
    circle.draw();
    std::cout<<"\n\n\n";
    Shape* shape_ptr = &shape;
    shape_ptr->draw();
    std::cout<<"\n";

    shape_ptr = &oval;
    shape_ptr->draw();
    // Oval* oval_ptr = &oval;
    // oval_ptr->draw();
    // std::cout<<"\n";

    // Circle* circle_ptr = &circle;
    // circle_ptr->draw();
    std::cout<<"\n\n\n";
    return 0;
}


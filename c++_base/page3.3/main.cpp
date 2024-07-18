#include <iostream> 
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(int argc,char** argv){
    // Shape shape("Shape");
    Oval oval(2,3.5,"Oval");
    Circle circle(3.3,"Circle");
    // Shape* shape_ptr[] = {&shape,&oval,&circle};
    // for(Shape* s:shape_ptr){
    //     s->draw();
    // }
    std::unique_ptr<Shape> shape{new Shape};
    // oval.draw();
    // oval.draw(10);
    // std::cout<<"\n";
    return 0;
}


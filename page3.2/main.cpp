#include <iostream> 
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

int main(int argc,char** argv){
    // Shape shape("Shape");
    // // shape.draw();
    // // std::cout<<"\n";
    // Oval oval(2,3.5,"Oval");
    // std::cout<<"\n----------------------\n";
    // // oval.draw();
    // // std::cout<<"\n";
    // Circle circle(3.3,"Circle");
    // // circle.draw();
    // // std::cout<<"\n\n\n";
    // Shape* shape_ptr = &shape;
    // // shape_ptr->draw();
    // // std::cout<<"\n";

    // shape_ptr = &oval;
    // /* при создании динамического обекта Shape, чтобы после присваивания Oval использовать метод от Oval, а не от Shape, нужно обявить метод Shape.draw() virtual*/
    // shape_ptr->draw(); 
    // shape_ptr = &circle;
    // shape_ptr->draw();
    // Oval* oval_ptr = &oval;
    // oval_ptr->draw();
    // std::cout<<"\n";

    // Circle* circle_ptr = &circle;
    // circle_ptr->draw();
 
    // std::unique_ptr<Shape> shape{new Shape("Hallo")};
    // shape->draw();

    Shape shape("Shape");
    Oval oval(2,3.5,"Oval");
    Circle circle(3.3,"Circle");
    Shape* shape_ptr[] = {&shape,&oval,&circle};
    for(Shape* s:shape_ptr){
        s->draw();
    }
    std::cout<<"\n";
    return 0;
}


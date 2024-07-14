#include <iostream> 
#include "shape.h" 
#include "ellipse.h"

int main(int argc, char** argv){
    Shape shape1("Shape1");
    std::cout<<"count : "<<Shape::count<<std::endl;
    Ellipse ellipse1(1,1,"Ellipse1");
    std::cout<<"count : "<<Ellipse::count<<std::endl;
    Shape* shapes[]{&shape1,&ellipse1};
    for(auto s:shapes){
        std::cout<<s->get_count()<<std::endl;
    }
    return 0;
}

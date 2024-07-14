#include "shape.h"
int Shape::count{0};
Shape::Shape(const std::string& description):description(description){++count;}
Shape::Shape():Shape("NoDescription"){}
Shape::~Shape(){--count;}
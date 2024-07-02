#include <iostream>

union Value{
   double x;
   int y;
};


int main(){
   Value v;
   v.x = 4;
   std::cout<<v.x<<std::endl;
   std::cout<<v.y<<std::endl;
  
} 
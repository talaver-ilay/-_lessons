#include <iostream>

enum class Color{red,blue,green};
enum class Trafic{red,blue,green};
Color& operator++(Color& obj){
   switch (obj){
      case Color::red : return obj = Color::blue;
      case Color::blue : return obj = Color::green;
      case Color::green : return obj = Color::red;
   }
}
int main(){
   Color col{0};
   ++col;
   std::cout<<(int) col <<std::endl;
} 
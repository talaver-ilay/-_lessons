#include <iostream>
#include <cstring>
using namespace std;

enum eColor{RED,GREEN,BLUE};

enum class eTankDirection:char{LEFT,UP,DOWN};

eTankDirection operator++(eTankDirection& obj){
    obj = (obj == eTankDirection::DOWN)?eTankDirection::LEFT : eTankDirection(int(obj)+1);
    return obj;
}

int main(int argc, char** argv){
    eColor color1{RED};
    eColor color2 = RED;
    eColor color3 = eColor(RED);
    eColor color4 = (eColor)1;
    eColor color5 = eColor(1);

    eTankDirection et_dir1{eTankDirection::UP};
    eTankDirection et_dir2(eTankDirection);
    eTankDirection et_dir3 = eTankDirection{eTankDirection::UP};
    eTankDirection et_dir4 = eTankDirection(eTankDirection::DOWN);
    eTankDirection et_dir5 = eTankDirection(1);
    
    int i = int(eTankDirection::DOWN);
    int j = (int)(eTankDirection::DOWN);
    
    std::cout<<(int)++et_dir1<<std::endl;
    return 0;
}
#include <iostream>

union Value{
	u_int16_t x;
	u_int8_t y1[2];

};

int main(){
	Value v;
	v.x = {255};
	std::cout<<(int)v.y1[1]<<std::endl;
	std::cout<<(int)v.y1[0]<<std::endl;
	std::cout<<(int)v.x<<std::endl;
	
	return 0;
}
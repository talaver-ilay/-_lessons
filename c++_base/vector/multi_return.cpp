#include <iostream>

auto fan(int a)->int{
	return a;
}
struct value{
	std::string str;
	int num;
};

value fan(const value& v){
	return v;
}

int main(){
	value v{"Hallo",2};
	auto[str,num] = fan(v);
	std::cout<<str<<" "<<num<<std::endl;
	return 0;
}
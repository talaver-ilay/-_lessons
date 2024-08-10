#include <iostream>
struct Vector{
	double* elem;
	size_t sz;
};
void vector_init(Vector& v, const size_t& s){
	v.elem = new double[s];
	v.sz = s;
}
double write_and_sum(const size_t& s){
	Vector v;
	vector_init(v, s);
	for(size_t i{0}; i!=s; ++i){
		std::cin>>v.elem[i];
	}
	double sum = 0;
	for(size_t i{0}; i != s; ++i){
		sum += v.elem[i]; 
	}
	return sum;
}
int main(){
	std::cout<<write_and_sum(3)<<"\n";
	
	
	return 0;
}
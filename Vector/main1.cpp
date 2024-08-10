#include <iostream>
class Vector{
	public:
		Vector(size_t s):sz{s},elem{new double(s)}{}
		double& operator[](int i){ return elem[i];}
		int size(){
			return sz;
		}
	private:
		double* elem;
		size_t sz;
};
double write_and_sum(const size_t& s){
	Vector v(s);
	for(size_t i{0}; i!=v.size(); ++i){
		std::cin>>v[i];
	}
	double sum = 0;
	for(size_t i{0}; i != v.size(); ++i){
		sum += v[i]; 
	}
	return sum;
}
int main(){
	std::cout<<write_and_sum(6)<<"\n";
	
	
	
	return 0;
}
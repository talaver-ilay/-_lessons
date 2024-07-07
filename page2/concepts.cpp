#include <iostream>
#include <concepts>
// only c++ >20
template<class T>requires std::integral<T>T add(const T& a,const T& b) ; // запретить в шаблоне испрльзовать тип double

int main(int argc, char **argv){
    std::cout<<add(11,22)<<std::endl;
    std::cout<<max(11,22)<<std::endl;
    return 0;
}

template<class T> 
requires std::integral<T>
T add(const T& a,const T& b) {
    return a+b;
}

std::integral auto max(std::integral auto a,std::integral auto b){
    return a > b ? a : b;
}
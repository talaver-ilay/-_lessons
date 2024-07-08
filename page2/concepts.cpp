#include <iostream>
#include <concepts>
// only c++ >20
template<class T>requires std::integral<T>T sum(const T& a,const T& b) ; // запретить в шаблоне испрльзовать тип double
template<std::integral T>T add(const T& a,const T& b); // запретить в шаблоне испрльзовать тип double


auto max(std::integral auto a,std::integral auto b){
    return a>b?a:b;
}
int main(int argc, char **argv){
    
    auto a = 11;
    auto b = 12;
    std::cout<<max(a,b)<<std::endl;
    std::cout<<add(a,b)<<std::endl;
    std::cout<<sum(a,b)<<std::endl;
    return 0;
}

template<class T> 
requires std::integral<T>
T sum(const T& a,const T& b) {
    return a+b;
}

template<std::integral T> 
T add(const T& a,const T& b) {
    return a+b;
}



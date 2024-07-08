#include <iostream>
#include <concepts>



template <class T>
concept Multipliable = requires(T a, T b){
    a * b;
};

template <class T>
concept Incrementable = requires(T a){
    ++a;
    a++;
    a+=1;
};

template<class T>requires Multipliable<T>T add1(const T& a,const T& b);

template<class T>requires Incrementable<T>const T& add2( T& a);

int main(int argc,char **argv){
    // std::cout<<add1("Ha","Lo")<<std::endl;
    std::cout<<add1(10,11)<<std::endl;
    int x{10};
    std::cout<<add2(x)<<std::endl;
    std::string y{"10"};
    std::cout<<add2(y)<<std::endl;
    // std::cout<<add2("Ha")<<std::endl;
    return 0;
}

template<class T> 
requires Multipliable<T>
T add1(const T& a,const T& b) {
    return a+b;
}
template<class T> 
requires Incrementable<T>
const T& add2(T& a) {
    return ++a;
}


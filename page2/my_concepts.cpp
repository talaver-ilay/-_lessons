#include <iostream>
#include <concepts>

template <class T>
concept MyIntegral = std::is_integral_v<T> ;

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

template<class T>requires MyIntegral<T>T add1(const T& a,const T& b);
template<MyIntegral T>T add2(const T& a,const T& b);
auto add3(const MyIntegral auto& a,const MyIntegral auto& b) {
    return a+b;
}

int main(int argc,char **argv){
    std::cout<<add1(10,11)<<std::endl;
    std::cout<<add2(10,11)<<std::endl;
    std::cout<<add3(10,11)<<std::endl;
    return 0;
}

template<class T> 
requires MyIntegral<T>
T add1(const T& a,const T& b) {
    return a+b;
}
template<MyIntegral T> 
T add2(const T& a,const T& b) {
    return a+b;
}

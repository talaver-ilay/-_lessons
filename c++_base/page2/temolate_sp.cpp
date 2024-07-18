#include <iostream>
template<class T> T maximum(const T a,const T b);
template<> const char* maximum<const char*>(const char* a, const char* b);

int main(int argc,char **argv){
    std::cout<<maximum(1,2)<<std::endl;
    maximum("Hallo","world!");
    return 0;
}

template<class T> T maximum(const T a,const T b){
    return a > b ? a : b;
}; 

template<> const char* maximum<const char*>(const char* a, const char* b){
    std::cout<<a<<" ";
    std::cout<<b<<std::endl;
    return a;
};

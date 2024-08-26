#include <iostream>
#include <string>

#define template_max(name, type) type max##name(type a, type b){\
    return a > b ? a : b;\
}

using namespace std;

template_max(Int, int);
template_max(Float, float);

namespace my{
template<typename T>
T max(const T &a,const T &b){
    return a > b ? a : b;
}}

struct A{
    bool operator>(const A& B){
        if(a > B.a) return true;
        else return false; 
    }
    int a;
};


int main(int argcp, char **argv){

    A a{2};
    A b{3};
    
    cout<<maxInt(2,3)<<endl;

    cout<<maxFloat(2.2,3.)<<endl;

    cout<<my::max(2,3)<<endl;

    cout<<my::max<double>(2,3)<<endl;

    cout<<(a > b)<<endl;

    return 0;
}
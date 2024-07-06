#include <iostream>
using namespace std;
 int main(){
    int* x{nullptr};
    delete x;
    size_t size{10};
    double* x1{new double[size]};
    int* x2{new(std::nothrow) int[size]{}};
    double* x3{new(std::nothrow) double[size]{1,2,3,4}};
    int x4[]{1,2,3,4,5,67,8,9};
    for(auto i : x4){cout<<" "<<i;}
    return 0;
 }
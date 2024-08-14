#include <iostream>

#include "gps_tools.hpp"

using namespace Navigation;

int main(int argc, char** argv){

    Latitude lat(-120.8998);
    Latitude lat2(93);
    std::cout<<lat.point().degree<<std::endl;
    std::cout<<lat.point().ch<<std::endl;
    if(lat == lat2){
        std::cout<<"equals"<<std::endl;
    }else  std::cout<<"non_equals"<<std::endl;
    if(lat != lat2){
        std::cout<<"non_equals"<<std::endl;
    }else  std::cout<<"equals"<<std::endl;  
    return 0;
}
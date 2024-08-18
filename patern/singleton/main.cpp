#include <iostream>
#include "singleton.h"
int main(){
    Singleton* single1 = Singleton::Initstate();
    Singleton* single2 = Singleton::Initstate();
    if(single1==single2){
        std::cout<<"Equal"<<std::endl;
    }
}
#include <iostream>
int main(int argc, char** argv){
    if(argc == 1){
        std::cout<<"Hallo World"<<std::endl;
        return 0;
    }
    if(argc > 1){
        std::cout<<"So many!"<<std::endl;
        return 0;
    }
    
}
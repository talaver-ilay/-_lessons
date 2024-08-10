#include <iostream>
#include "print.hpp"

#include "version.h"
#include "path.h" 

int main(int argc, char** argv){
    if(argc == 1){
        print("Hallo World");
        return 0;
    }
    if(argc > 1){
        print("So many args!");
        return 0;
    }
    
}
#include <iostream>
#include "list.h"
int main(int argc, char **argv){
    List list(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);

    list.print();
    list.erase(4);
    list.print();
    
    return 0;
}
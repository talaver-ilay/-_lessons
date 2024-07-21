#include <iostream>
typedef void (*callback)(int);

void print_int(int x){
    std::cout<<x<<std::endl;
}
void y(callback fanc,int xy){
    fanc(xy);
}

int main(){
    y(print_int,12);
    return 0;
}
#include <iostream>
#include <functional>

typedef void (*callback)(int);

void print_int(int x){
    std::cout<<x<<std::endl;
}
void y(callback fanc,int xy){
    fanc(xy);
}


void fanc_(std::function<void(int)> fanc, int x){
    fanc(x);
}

int main(){
    y(print_int,12);
    fanc_(print_int,13);
    return 0;
}
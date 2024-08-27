#include <iostream>
#include <array>
#include <cstddef>
#include <vector>
#include <algorithm>
#include <functional>

namespace my{
   void fanc(){
    int x{12};
    auto print = [&](int y){std::cout<<"lambda! x ="<<x<<" y ="<<y<<std::endl;};
    [x](int y){std::cout<<"lambda! x ="<<x<<" y ="<<y<<std::endl;}(x);
    print(x);
   }

   void fanc2(){
        std::vector<int> vct;
        
        for(size_t i = 0;i<10;i++) vct.push_back(rand()%100-50);
        
        for(auto i:vct) std::cout<<i<<" ";
        std::cout<<std::endl;
        
        std::sort(vct.begin(),vct.end(),[](int a, int b){return a < b;});
        for(auto i:vct) std::cout<<i<<" ";
        std::cout<<std::endl;
        
        std::sort(vct.begin(),vct.end(),[](int a, int b){return a > b;});
        for(auto i:vct) std::cout<<i<<" ";
        std::cout<<std::endl;

        std::sort(vct.begin(),vct.end(),[](int a, int b){return std::abs(a) > std::abs(b);});// по модулю
        for(auto i:vct) std::cout<<i<<" ";
        std::cout<<std::endl;

   } 

}
    


int main(int argc, char **argv){
    my::fanc();
    int x{9};
    switch (x){
    case 0 ... 5:
        std::cout<<"0..5"<<std::endl;
        break;
    case 6 ... 10:
        std::cout<<"6..10"<<std::endl;
        break;
    }

    return 0;
}

// typedef void (*callback)(int);

// void print_int(int x){
//     std::cout<<x<<std::endl;
// }
// void y(callback fanc,int xy){
//     fanc(xy);
// }


// void fanc_(std::function<void(int)> fanc, int x){
//     fanc(x);
// }

// int main(){
//     y(print_int,12);
//     fanc_(print_int,13);
//     return 0;
// }
#include <iostream>
#include <array>
#include <cstddef>
#include <vector>
#include <algorithm>

namespace my{
   void fanc(){
    int x{12};
    auto print = [x](int y){std::cout<<"lambda! x ="<<x<<" y ="<<y<<std::endl;};
    [x](int y){std::cout<<"lambda! x ="<<x<<" y ="<<y<<std::endl;}(x);
    print(x);
   }

   void fanc2(){
        std::vector<int> vct;
        
        for(size_t i = 0;i<10;i++) vct.push_back(rand()%100-50);
        
        for(auto i:vct) std::cout<<i<<" ";
        std::cout<<std::endl;
        
        std::sort(vct.begin(),vct.end());

        for(auto i:vct) std::cout<<i<<" ";
        std::cout<<std::endl;

   } 

}
    


int main(int argc, char **argv){
    my::fanc2();
    return 0;
}
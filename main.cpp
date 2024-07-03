#include <iostream>
#include <limits>
#include <cmath>
// std::cout<<std::numeric_limits<int>::min()<<std::endl;
int main(){
  double wight{7.4};
  double save{4};
//   std::cout<<std::floor(wight)<<std::endl;
//   std::cout<<std::ceil(wight)<<std::endl;
   // std::cout<<std::abs(wight)<<std::endl;
   // std::cout<<std::abs(save)<<std::endl;
   // std::cout<<std::pow(2,2)<<std::endl; 
   // std::cout<<std::log2(16)<<std::endl;
// auto x = (wight>save)?wight:save; 
// std::cout<< x <<std::endl;
// std::cout<<std::numeric_limits<size_t>::min()<<std::endl;
// std::cout<<std::numeric_limits<size_t>::max()<<std::endl;
// char ch1[]{"Hallo"};
// char ch2[] = {'H','a','l','l','o','\0'};
// char ch3[6] = {'H','a','l','l','o','\0'};
// std::cout<<ch1<<std::endl;
// std::cout<<ch2<<std::endl;
// std::cout<<ch3<<std::endl;
char* ch = {"Hallo"};
std::cout<<*(ch+1)<<std::endl;
}

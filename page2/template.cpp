#include <iostream>

// template <typename T> const T& max(const T& a,const T& b);

// template <typename T> T& min(T a, T b);
int& min(int& a, int& b);
int main(){
    // [](std::string str){std::cout<<str<<std::endl;}("Hallo world");
   
    int x = 1;
    int y = 2;
    int min_value = min(x,y); 
    ++min_value;
    std::cout<<min_value<<std::endl;
    min_value = y;
    std::cout<<min_value<<std::endl;
    return 0;
}

// template <typename T> const T& max(const T& a, const T& b){
//     return (a > b)?a:b;
// }  
// template <typename T> T& min(T a, T b){
//     return (a < b)?a:b;
// } 
int& min(int& a, int& b){
    return (a < b)?a:b;
}
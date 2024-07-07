#include <iostream> 

// auto fanc = [](){
//     std::cout<<"Hallo World!"<<std::endl;
// };
// auto fanc2 = [](int a,int b){std::cout<<a + b<<std::endl;};
// auto fanc3 = [](int a,int b){return a + b;}(3,3);
// auto fanc4 = [](int a,int b)->int{return a + b;}(3,3);
// int main(){
//     [](){std::cout<<"Hallo World!"<<std::endl;}();
//     fanc();
//     [](int a,int b){std::cout<<a + b<<std::endl;}(2,3);
//     fanc2(2,3);
//     std::cout<<fanc3<<std::endl;
//     std::cout<<fanc4<<std::endl;
//     return 0;
// }



int main(){
    double a{1.2};
    double b{7.4};
    
    std::cout<<[a,b]()->double{return a + b;}()<<std::endl; // копирует переменную а и b
    
    [&a](){++a;}();
    std::cout<<a<<std::endl; // ссылка на переменную 'а'
    
    [&](){++b;}();
    std::cout<<b<<std::endl; // ссылка на любое значение в области видимости

    std::cout<<[=](){return a;}()<<std::endl; // копирует любую переменную в области видимости
    
    return 0;
}
#include <iostream> 
#include <cstring>
int main(){
    // char* str1{"Hallo"};
    // char* str2 = "Hallo";
    // char* str3{"Hall"};
    // if(!std::strcmp(str1,str2)){
    //     std::cout<<"str1 and str2 equal"<<std::endl;
    // }
    // if(std::strcmp(str1,str3)){
    //     std::cout<<"str1 and str3 not equal"<<std::endl;
    // }
    std::string str(4,'e');
    std::cout<<str<<std::endl;
    std::string str1{"HalloWorldd"};
    std::string str2(str1,6,5);
    std::cout<<str2<<std::endl;
    return 0;
}

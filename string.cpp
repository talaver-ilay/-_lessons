#include <iostream> 
#include <cstring>
int main(){
    // std::string x{"Hallo world"};
    // int count = 0;
    // for(auto i: x){
    //     ++count;
    //     if(std::isblank(i)){
    //         std::cout<<count<<"\n";
    //     }
    // } 
    char* str1{"Hallo"};
    char* str2 = "Hallo";
    char* str3{"Hall"};
    // if(std::strcmp(str1,str2)){
    //     std::cout<<"equal"<<std::endl;
    // }

    if(std::strcmp(str1,str3)){
        std::cout<<"equal"<<std::endl;
    }else{
        std::cout<<"not equal"<<std::endl;
    }
    return 0;

}

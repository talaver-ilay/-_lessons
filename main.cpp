#include <iostream>

// using namespace std;
int count_x(const char* p,const char x){
   if(p==nullptr){
      std::cout<<"Zero!"<<std::endl;
      return 0;
   }
   int count = 0;
   for(;*p!=0;++p){
      if(*p==x){
         ++count;
      }
   }
   return count;
}
int main(){
   // int x[] = {0,1,2,3,4,5,6,7,8,9};
   // for(const auto& i:x){
   //    std::cout<<i<<"\n";
   // }
   char* x = nullptr;
   std::cout<<count_x("Hallo World",'o')<<std::endl;
   std::cout<<count_x(x,'l')<<std::endl;
}  
// #include <iostream>

// int count_x(const char* p,const char x){
//    if(p==nullptr){
//       std::cout<<"Zero!"<<std::endl;
//       return 0;
//    }
//    int count = 0;
//    while(*p){
//       if(*p==x){
//          ++count;
//       }
//       ++p;
//    }
//    return count;
// }

// int main(){
//    char* x = nullptr;
//    std::cout<<count_x("Hallo World",'o')<<std::endl;
//    std::cout<<count_x(x,'l')<<std::endl;
// }  
#include <iostream>

using namespace std;
namespace cpp_ns{
    struct string{  
        char *mpStr;
        size_t mSize;
        void init(){
            mpStr = nullptr;
            mSize = 0;
        }
        
    };
}

int main(int argc, char** argv){
    cpp_ns::string str;
    str.init();
    return 0;
}
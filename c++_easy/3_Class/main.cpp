#include <iostream>

using namespace std;
namespace cpp_ns{
    class string{  
        char *mpStr;
        size_t mSize;
        public:
        string():mpStr(nullptr),mSize(0){
            mpStr = new char[10];
            mSize = 10;
            cout<<__FUNCTION__<<endl;
        }
        ~string(){
            free();
            cout<<__FUNCTION__<<endl;}

        void resize(size_t aNewSize){
            free();
            mpStr = new char[aNewSize];
            mSize = aNewSize;
        }
        private:
        void free(){
            if(mpStr != nullptr){
               delete[] mpStr ;
            }
        }
    };
}

int main(int argc, char** argv){
    cpp_ns::string str1;
    cout<<hex;
    cout<<&str1<<endl;
    cout<<dec;
    return 0;
}
#include <iostream>
#include "string.hpp"
#include <cstring>
using namespace std;

int main(int argc, char** argv){

    cpp_ns::string a("Hallo world");
    cpp_ns::string b(a);
    cout<<b.c_str()<<endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

string answ = "42";
string& fanc(){
    return answ;
}

int main(int argc, char **argv){
    fanc() = "4";
    
    
    return 0;
}
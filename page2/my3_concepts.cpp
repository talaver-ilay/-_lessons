#include <iostream>
#include <concepts>

template<class T>
concept TinyTipe = requires(T ch){
    requires sizeof(ch)<4;
};

template<class T>
requires TinyTipe<T>
void print( T a);

int main(int argc,char **argv){
    std::string x = "Halla";
    char x1 = 'a';
    short int y{254};
    int y1{254};
    print(x);
    print(x1);
    print(y);
    print(y1);
    return 0;
}

template<class T>
requires TinyTipe<T>
void print( T a){
    std::cout<<a<<std::endl;
}
#include <iostream>
#include <concepts>

template <class T>
concept Addable = requires(T a, T b){
    // {a + b} -> std::convertible_to<int>;
    {a + b};
};

Addable auto add(Addable auto a, Addable auto b){
    return a + b;
}

template<class T>
T fanc(T t) requires std::integral<T> 
&& requires (T t){requires sizeof(t)<=4;}
{
    std::cout<<t<<std::endl;
    return (2*t);
}

int main(int argc,char **argv){
    // int x{24};
    // int y{64};
    std::string x{"Hallo"};
    std::string y{"World"};
    std::cout<<add(x,y)<<std::endl;
    short int a{24};
    char b{'a'};
    fanc(a);
    fanc(b);
    return 0;
}


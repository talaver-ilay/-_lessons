#include <iostream>
#include <array>
#include <cstddef>
#include <vector>
#include <algorithm>
#include <functional>

namespace my{
    void test(const char *str){
        std::cout<<"const char * = "<<str<<std::endl;
    }

    void test(std::string&& str){
        std::cout<<"std::string&& = "<<str<<std::endl;
    }

    void test(int&& x){
        std::cout<<"int&& = "<<x<<std::endl;
    }
    void test_2(int* x){
        std::cout<<"int* = "<<x<<std::endl;
    }

    void test(char&& ch){
        std::cout<<"char&& = "<<ch<<std::endl;
    }
}// namespace



int main(int argc, char **argv){
    my::test("Hallo World!");
    my::test((std::string)"Hallo World!");
    my::test(std::move("Hallo World!"));
    my::test(12);
    my::test('1');
    
    std::string str_1 = "Hakki";
    std::string str_2 = std::move(str_1);
    std::cout<<str_1<<std::endl;
    std::cout<<str_2<<std::endl;

    std::string str_3 = "Hakki";
    std::string str_4 = str_3;
    std::cout<<str_3<<std::endl;
    std::cout<<str_4<<std::endl;

    my::test_2((int*) 1);

    return 0;
}


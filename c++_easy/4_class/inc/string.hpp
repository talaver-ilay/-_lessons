#pragma once
#include <iostream>

using std::cout,std::endl;;

namespace cpp_ns{
    class string{  
    public:
        string();
        string(const char*);
        string(const string&); // конструктор копирования
        string &operator=(const string&); // присваивания копированием
        ~string();

        // string(string&&)                   = delete;
        // string &operator=(const string &&) = delete;

        const char *c_str()const; 

    private:
            char *mpStr = nullptr;
            size_t mSize = 0;
    };
}
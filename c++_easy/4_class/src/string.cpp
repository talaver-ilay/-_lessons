#include "string.hpp"

#include <string.h>

namespace cpp_ns{
    string::string():mpStr(nullptr),mSize(0){
        // std::cout<<__FUNCTION__<<" default"<<std::endl;
    }

    string::string(const char* str):mpStr(nullptr),mSize(0){
        // std::cout<<__FUNCTION__<<" custom"<<std::endl;
        if(str != nullptr){
            mSize = strlen(str);
            mpStr = new char[mSize + 1];
            memcpy(mpStr,str, mSize + 1);
        }
    }
    string::string(const string& obj):mpStr(nullptr), mSize(obj.mSize){
        if(obj.mpStr != nullptr){
            mpStr = new char[obj.mSize + 1];
            memcpy(mpStr, obj.mpStr, obj.mSize + 1);
        }
    }

    string& string::operator=(const string& obj){ // присваивания копированием
        if(this == &obj){ // чтобы не присваевать самому себе
            return *this;
        }
        if(mpStr != nullptr){
            delete [] mpStr;
            mSize = 0;
        }
        mSize = obj.mSize;
        mpStr = new char[obj.mSize + 1];
        memcpy(mpStr, obj.mpStr, mSize + 1);
        return *this;
    }
        

    const char* string::c_str()const{
        return mpStr;
    }

    string::~string(){
        std::cout<<__FUNCTION__<<std::endl;
        if(mpStr != nullptr){
            delete[] mpStr;
            mSize = 0;
        }
    }
}
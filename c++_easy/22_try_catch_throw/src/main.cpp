#include <iostream>
#include <array>
#include <cstddef>
#include <vector>
#include <algorithm>
#include <functional>

namespace my{
    template<typename T>
    void test_1(const T &ex){
        try{throw ex;}
        catch(const char *e){std::cout<<"const char *e : "<<e<<std::endl;} // try{throw "Bad news!";}
        catch(const char &e){std::cout<<"const char &e : "<<e<<std::endl;} // try{throw '1';}
        catch(const int &e){std::cout<<"const int *e : "<<e<<std::endl;}   // try{throw 1;}
        catch(...){std::cout<<"unknown"<<std::endl;}
    }
    template<typename T>
    void test_2(const T &x){
        std::vector<T> v;
        try{
            v.at(0) = x;
        }
        catch(std::out_of_range &ex){
            std::cout<<ex.what()<<std::endl;
        }
   }

    enum class fstate{OPEN, CLOSE, READ, WRITE, ERROR};

    void fopen(){throw fstate::OPEN;}
    void fclose(){throw fstate::CLOSE;}
    void fread(){throw fstate::READ;}
    void fwrite(){throw fstate::WRITE;}
    void ferror(){throw fstate::ERROR;}

    void test_3(void){
        try{
            my::fopen();
            my::fclose();
            my::fread();
            my::fwrite();
            my::ferror();
        }
        catch(const my::fstate &ex){
            switch(ex){
                case my::fstate::OPEN :     std::cout<<"Open"<<std::endl;   break;
                case my::fstate::CLOSE :    std::cout<<"Close"<<std::endl;  break;
                case my::fstate::READ :     std::cout<<"Read"<<std::endl;   break;
                case my::fstate::WRITE :    std::cout<<"Write"<<std::endl;  break;
                case my::fstate::ERROR :    std::cout<<"Error"<<std::endl;  break;
                default:                    std::cout<<"Good"<<std::endl;   break;
            }// switch
        }// catch
    }// test_3
}// namespace



int main(int argc, char **argv){
    my::test_1("Error");
    my::test_2(12);
    my::test_3();
    
    
    

    return 0;
}


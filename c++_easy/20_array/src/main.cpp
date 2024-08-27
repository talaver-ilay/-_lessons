#include <iostream>
#include <array>
#include <cstddef>

// using namespace std;
namespace my{
    template<class T, size_t aSize>
    struct array{
        T mData[aSize];
        size_t sz = aSize;
        
        const T &operator[](size_t i)const{
            return at(i);
        }
        T &operator[](size_t i){
            return at(i);
        }

        T &operator=(T& value){
            return value;
        }

        const T *begin()const{
            return mData;
        }
        const T *end()const{
            return mData + sz;
        }
        const T &at(size_t i)const{
                if(i>=sz) throw std::out_of_range(">= size!");
                else return mData[i];
        }
        T &at(size_t i){
                if(i>=sz) throw std::out_of_range(">= size!");
                else return mData[i];
        }
    };
    

}
    


int main(int argc, char **argv){
    my::array<char,5> char_array{'1','2','3','4','5'};
    for(size_t i = 0; i < char_array.sz;i++){
        std::cout<<char_array[i]<<std::endl;
    }

    // for(auto i:char_array){
    //     std::cout<<i<<" ";
    // }std::cout<<std::endl;
    // std::array<char,5> ch{'1','2','3','4','5'};
    // ch.at(5);
    // std::cout<<char_array.at(5)<<std::endl;
    
    int a{0};
    char_array.at(4) = '9';
    char_array[3] = '8';

    for(auto i:char_array){
        std::cout<<i<<" ";
    }std::cout<<std::endl;
    return 0;
}
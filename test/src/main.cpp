#include <iostream>
#include <array>
#include <cstddef>
#include <vector>
#include <algorithm>
#include <functional>

namespace my{
    template<class T>
    void sort(std::vector<T>& vt){
        for(size_t i = 0; i < vt.size()-1; ++i){
            for(size_t j = 0; j < vt.size()-1; ++j){
                if(vt[j]>vt[j+1]) std::swap(vt[j],vt[j+1]);
            }
        }
    }
    int index(std::vector<int>& vt){
        std::vector<int> vt2 = vt;
        int count = 0; 
        for(size_t i = 0; i < vt.size()-1; ++i){
            if(vt2[i]>vt[i+1]){
                ++count;
                std::swap(vt2[i],vt2[i+1]);
                if(vt2[i]<vt2[i-1]){
                    std::swap(vt2[i],vt2[i-1]);
                }
            }
        }
        for(auto i : vt2){
            std::cout<<i<<" ";
        }std::cout<<std::endl;
        return count;
    }
}// namespace



int main(int argc, char **argv){
    // std::vector<int> vt{1,1,4,2,1,3};
    std::vector<int> vt2{5,1,2,3,4};
    // std::cout<<my::index(vt)<<std::endl;
    std::cout<<my::index(vt2)<<std::endl;

    return 0;
}


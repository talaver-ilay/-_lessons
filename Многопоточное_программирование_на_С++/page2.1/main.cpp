#include <iostream>
#include <vector>
#include <set>
void print(const std::vector<int>& v);

int main(){
    // std::vector<int> v(16);
    // std::array<int,16> a;
    
    // // v.resize(32);
    // // v.reserve(128);
    // for(size_t i = 0;i<10;++i){
    //     v.push_back(i);
    // }
    
    // // v.pop_back();
    // v.erase(v.end());
    // for(auto i:v){
    //     std::cout<<i<<std::endl;
    // }

    std::set<int> s;
    s.insert(2);
    s.insert(8);
    s.insert(1);
    s.insert(4);
    // for(size_t i = 1;i<10;++i){
    //     s.insert(i);
    // }
    // for(auto i=s.begin();i!=s.end();++i){
    //     std::cout<<*i<<" ";
    // }
    for(auto i:s){
        std::cout<<i<<std::endl;
    }

    
    return 0;
}

void print(const std::vector<int>& v){
    std::cout<<"capacity : "<<v.capacity()<<std::endl;
    std::cout<<"size : "<<v.size()<<std::endl;
}
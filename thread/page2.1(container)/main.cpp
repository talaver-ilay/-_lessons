#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
void print(const std::vector<int>& v);
struct comparator{
    bool operator()(const int& a, const int& b)const{
        return b<a;
    }
};
struct hasher{
    template<class T> size_t operator()(const T& a)const{
        return a%2;
    }
};
int main(){
    // std::set<int,comparator> s;
    std::unordered_set <int,hasher> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    for(auto i = s.begin();i!=s.end();++i){
        std::cout<<*i<<' ';
    }
    // // for(auto i:s){
    // //     std::cout<<i<<" ";
    // // }
    // std::cout<<'\n';
    
    return 0;
}


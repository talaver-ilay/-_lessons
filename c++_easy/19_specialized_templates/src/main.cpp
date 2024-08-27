#include <iostream>

using namespace std;
namespace my{
    template<typename T>
    T max(T a, T b){
        return a > b ? a : b;
    }
    template<> char* max<char*>(char *a, char *b){
        return (int)*a > (int)*b ? a : b;
    }
}
// частичная специоизация
template<typename T,int N> void sort(T(&a)[N]){
    for(int j = 0; j < N-1;j++){
        for(int i = 0; i < N-1;i++){
            if(a[i] > a[i+1]) std::swap(a[i],a[i+1]);
        }
    }
}


int main(int argc, char **argv){
    double list[10]{10.2,2.9,4.1,6.6,8.4,7.1,9.3,11.2,12.4,5.9};
    sort(list);
    for(auto i:list) cout<<i<<endl;
    
    char* a = (char*)"AB";
    char* b = (char*)"BA";
    cout<<*(my::max<char*>(a,b))<<endl;
    
    return 0;
}
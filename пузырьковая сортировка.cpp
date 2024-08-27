
#include <iostream>
using namespace std;

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
    
    return 0;
}
#include <iostream> 
using namespace std;
    int main(){
        int x{10};
        int x1{10};
        int& y{x};
        int z{11};
        
        cout<<"x = "<<x<<" || address:"<<&x<<"\n";
        cout<<"y = "<<y<<" || address:"<<&y<<"\n";

        const int* const w{&x};
        *w = {11}; // const int*
        w = &x1; //const w
        return 0;
    }

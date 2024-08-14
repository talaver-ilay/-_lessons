#include <iostream>
#include <vector>

using namespace std;

void foo_a(){
    vector<int> vi{1,2,3,4,5};
    // vi.resize(10);
    vi.reserve(10);
    cout<<vi.capacity()<<endl;

    cout<<vi.size()<<endl;
    cout<<vi[0]<<endl;
    vi.push_back(6);
    for(auto i : vi){
        cout<< i<<", ";
    }
    cout<<endl;
    vi.shrink_to_fit(); // уменьшить резерв до реального размера
    cout<<vi.capacity()<<endl;
}
int main(int argc, char** argv){
    foo_a();
    

    return 0;
} 
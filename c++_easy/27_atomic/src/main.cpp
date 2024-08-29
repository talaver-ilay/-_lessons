#include <iostream>
#include <mutex>
#include <thread> 
#include <atomic> 
#include <vector> 
#include <chrono> 

namespace my{
    std::mutex  m;
    std::mutex  m2;
    int gUChar{0};
    std::atomic<int> gaUChar{0};
    int gmUChar{0};
    

    
    void f_thread(size_t num){
        long i = 0;
        while(i<10000){
            gUChar++;
            gaUChar++;
            m.lock();
            gmUChar++;
            m.unlock();

            ++i;
        }
        m2.lock();
        std::cout<<"Thread num : "<<num<<std::endl;
        std::cout<<gUChar<<std::endl;
        std::cout<<gaUChar<<std::endl;
        std::cout<<gmUChar<<std::endl;
        m2.unlock();
    }
}

int main(int argc, char **argv){
    
    std::vector<std::thread> vt;
 
    for(size_t i = 0; i < 10;++i){
        vt.push_back(std::thread (my::f_thread,i));
    }
    for(size_t i = 0; i < 10;++i){
        vt[i].detach();
    }
    return 0;
}


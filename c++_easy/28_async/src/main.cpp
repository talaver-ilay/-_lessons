#include <iostream>
#include <mutex>
#include <thread> 
#include <atomic> 
#include <vector> 
#include <chrono>
#include <future>  

namespace my{
    bool f_task(unsigned aTaskID){
        static std::mutex m;
        m.lock();
        std::cout<<"(th_id:"<<this_thread::get_id()<<") "
    }
    
}

int main(int argc, char **argv){
    
   
    return 0;
}


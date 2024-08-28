#include <iostream>
#include <chrono>
#include <mutex>
#include <thread> 

namespace my{
    std:: mutex mx;
    void f_thread(int x){
        
        mx.lock();
        std::cout<<x<<std::endl;
        mx.unlock();
    }
    void test(){
        std::thread th1(f_thread,1);
        std::thread th2(f_thread,2);
        std::thread th3(f_thread,3);

        th1.detach();
        th2.detach();
        th3.detach();
    }
    void test2(){
        std::thread th1(f_thread,1);
        std::thread th2(f_thread,2);
        std::thread th3(f_thread,3);

        th1.join();
        th2.join();
        th3.join();
    }
    
}// namespace



int main(int argc, char **argv){
    my::test2();
    return 0;
}


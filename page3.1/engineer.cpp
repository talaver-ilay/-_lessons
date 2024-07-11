#include "engineer.h"

std::ostream& operator<<(std::ostream& out, Engineer& engineer){
    out << "Person [Full name : "<<engineer.get_full_name()<<
           ", age : "<<engineer.get_age()<<
           ", address : "<<engineer.get_address()<<"]";
    return out;
}

Engineer::Engineer(const std::string& fullname,int age,const std::string address, int contruct_count)
{
    
}

int Engineer::get_contruct_count()const{
    return contruct_count;
}

void Engineer::set_contruct_count(int& count){
    this->contruct_count = count ;
}
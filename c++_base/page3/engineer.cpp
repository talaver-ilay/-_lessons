#include "engineer.h"

std::ostream& operator<<(std::ostream& out, Engineer& engineer){
    out << "Person [Full name : "<<engineer.get_full_name()<<
           ", age : "<<engineer.get_age()<<
           ", address : "<<engineer.get_address()<<"]";
    return out;
}

int Engineer::get_contruct_count()const{
    return contruct_count;
}
#include "engineer.h"

std::ostream& operator<<(std::ostream& out,const Engineer& engineer){
    out << "Engineer [Full name : "<<engineer.get_full_name()<<
           ", age : "<<engineer.get_age()<<
           ", address : "<<engineer.get_address()<<
           ", contruct : "<<engineer.get_contruct_count()<<"]";
    return out;
}

 Engineer::Engineer(const std::string& fullname,int age,const std::string address, int contruct_count)
 :Person(fullname,age,address), contruct_count(contruct_count){
    std::cout<<"Custom constructor for Engineer called..."<<std::endl; 
 }
Engineer::Engineer(const Engineer& source):Person(source), contruct_count(source.contruct_count){
    std::cout<<"Engineer Copy constructor called..."<<std::endl;   
}

// Engineer::Engineer(){
//     std::cout<<"Default constructor for Engineer called..."<<std::endl;   
// }

void Engineer::print(int& x)const{
    std::cout<<x<<std::endl;
    std::cout<<"Hallo Engineer"<<std::endl;
}

int Engineer::get_contruct_count()const{
    return contruct_count;
}

void Engineer::set_contruct_count(int& contruct_count){
    this->contruct_count = contruct_count ;
}
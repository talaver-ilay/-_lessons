#include "civilengineer.h"

std::ostream& operator<<(std::ostream& out,const CivilEngineer& civilengineer){
    out << "CivilEngineer [Full name : "<<civilengineer.get_full_name()<<
           ", age : "<<civilengineer.get_age()<<
           ", address : "<<civilengineer.get_address()<<
           ", contruct : "<<civilengineer.get_contruct_count()<<
           ", speciality : "<<civilengineer.get_speciality()<<"]";
    return out;
}

// CivilEngineer::CivilEngineer(){
//     std::cout<<"Default constructor for CivilEngineer called..."<<std::endl;   
// }
CivilEngineer::CivilEngineer(const std::string& fullname,int age,const std::string address, int contruct_count,  std::string speciality)
:Engineer(fullname,age,address,contruct_count), speciality(speciality){
    std::cout<<"Custom constructor for CivilEngineer called..."<<std::endl;   
}
CivilEngineer::CivilEngineer(const CivilEngineer& source):Engineer(source), speciality(speciality){
    std::cout<<"CivilEngineer Copy constructor called..."<<std::endl;   
}
std::string CivilEngineer::get_speciality()const{
    return this->speciality;
}
void CivilEngineer::set_speciality(std::string& speciality){
    this->speciality = speciality;
}
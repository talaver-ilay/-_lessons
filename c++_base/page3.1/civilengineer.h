#pragma once

#include <iostream>
#include "engineer.h"

class CivilEngineer: public Engineer{
    friend std::ostream& operator<<(std::ostream& out,const CivilEngineer& civilengineer);
    using Engineer::Engineer;
    public:
        
        ~CivilEngineer(){};
        CivilEngineer(const std::string& fullname,int age,const std::string address, int contruct_count,  std::string speciality);
        CivilEngineer(const CivilEngineer& source);
        std::string get_speciality()const;
        void set_speciality(std::string& speciality);
    private:
        std::string speciality{"None"};
};
#pragma once

#include <iostream>
#include "engineer.h"

class CivilEngineer: public Engineer{
    //friend std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand);
    public:
        CivilEngineer();
        ~CivilEngineer(){};
        
    private:
        std::string m_speciality{"None"};
};
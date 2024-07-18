 #include "feline.h"
 
Feline::Feline(const std::string& fur_style, const std::string& description)
: Animal(description),fur_style(fur_style){}

Feline::~Feline(){
    std::cout<<"Feline desctructor called"<<std::endl;
}
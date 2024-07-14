#pragma once
#include <iostream>
#include "feline.h"

class Dog:public Feline{
  public:
    Dog() = default;
    Dog(const std::string& fur_style, const std::string& description);
    ~Dog();
    // virtual void run()const{
    //   std::cout<< "Dog::bark called : Woof!"<<std::endl;
    // }
    virtual void bark()const{
      std::cout<<"Dog::bark called : Woof!"<<std::endl;
    }
};
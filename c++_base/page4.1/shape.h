#pragma once 
#include<iostream> 

    class Shape final{ // запретить наследования
        public:
            Shape();
            Shape(const std::string& description);
            ~Shape();
            void draw()const{
                std::cout<<"Shape::draw() called for : "<<description<<std::endl;
            }
            virtual int get_count()const final{ // запретить перегрузку
                return count;
            }
        static int count;
        protected:
            std::string description;
    };
 
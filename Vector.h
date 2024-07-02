#include <iostream>

class Vector{
      double* elem;
      int sz;
   public:
      Vector(int s);
      double& operator[](int i);
      int size();
};
#include <iostream>
#include "animal.h"
#include "dog.h"
#include "feline.h"

int main(int argc,char** argv){
    Animal* animal1 = new Feline("stripes","feline1");
    // Feline feline2("stripes","feline2");
    Feline* feline1 = static_cast<Feline*>(animal1);
    delete animal1;
    // Animal& animal_ref = feline2;
    return 0;
}

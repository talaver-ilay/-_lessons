#include <iostream>
#include "dog.h"

// void fanc(){
//     Dog* dog = new Dog("Ayk","Akita Inu",12);
//     delete dog;
// }

class xy{   // default private
    int x;
    int y;
};
struct xyx{ // default public
    int x;
    int y;
};

int main(int argc, char **argv){
    Dog* dog = new Dog("Ayk","Akita Inu",12);
    dog->print();
    // dog->set_name("Losos")->set_breed("Terier")->set_age(13);
    dog->set_name("Losos").set_breed("Terier").set_age(13);
    dog->print();
    delete dog;
    
    xy x;
    xyx y;
    x.x = 1;
    y.x = 1;

    return 0;
}

#include "singleton.h"

Singleton* Singleton::_instance = 0;

Singleton* Singleton::Initstate(){
    if(_instance == 0){
        _instance = new Singleton;
    }
    return _instance;
}
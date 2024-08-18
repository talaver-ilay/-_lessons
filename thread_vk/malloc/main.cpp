#include <iostream>
#include <memory>
#include <vector>
#include <stdlib.h>
// #include <dmalloc.h>

void leak(uint n){
    malloc(n);

}
int main(){
   leak(1);
   leak(2);
   leak(3);
   void *m = malloc(1024);
   free(m);
   char* c = (char*)malloc(sizeof(char)*10);
   free(c); 
    return 0;
}


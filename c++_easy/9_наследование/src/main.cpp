#include <iostream>
#include <string>

using namespace std;

#include "glmain.h"
#include <GL/glut.h>

int main(int argcp, char **argv){
    glutInit(&argcp, argv);

    glMain glw;
    glw.run();

    return 0;
}
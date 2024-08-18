#ifndef GLMAIN_H
#define GLMAIN_H

#include "../tools_src/glfw_engine2D.hpp"

#include "../tools_src/graphical_library/gppoint.hpp"
#include "../tools_src/graphical_library/gpline.hpp"
#include "../tools_src/graphical_library/gplines.hpp"
#include "../tools_src/graphical_library/gpopenlines.hpp"
#include "../tools_src/graphical_library/gpclosedlines.hpp"
#include "../tools_src/graphical_library/gpcircle.hpp"
#include "../tools_src/graphical_library/gpplane.hpp"
#include "../tools_src/graphical_library/gptriangle.hpp"
#include "../tools_src/graphical_library/gpgrid.hpp"

using namespace cpp_prosto::graphical;

struct glMain : glfw_engine2D{
    glMain();

    void drawGLFW() override;
    void keyEvent(GLFWwindow *, int, int, int, int) override;
    void mouseKeyEvent(GLFWwindow *, int, int, int) override;

private:
    void init();
    void processing();
    void draw();

private:
    gpPoint       mPoint;
    gpLine        mLine;
    gpLines       mLines;
    gpOpenLines   mOpenLines;
    gpClosedLines mClosedLines;
    gpCircle      mCircle;
    gpCircle      mFilledCircle;
    gpPlane       mPlane;
    gpPlane       mFilledPlane;
    gpTriangle    mTriangle;
    gpTriangle    mFilledTriangle;
    gpGrid        mGrid;
    gpGrid        mFilledGrid;
};

#endif // GLMAIN_H

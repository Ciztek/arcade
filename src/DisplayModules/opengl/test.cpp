#include <dlfcn.h>
#include <iostream>
#include "OpenGLDisplayModule.hpp"

//write a main that tests the OpenGLDisplayModule
int main()
{
    OpenGLDisplayModule *display = new OpenGLDisplayModule();
    display->initialize();
    display->render();
    return 0;
}

//g++ src/DisplayModules/opengl/test.cpp src/DisplayModules/opengl/OpenGLDisplayModule.cpp src/DisplayModules/ADisplayModule.cpp -iquote includes/DisplayModules -iquote includes -iquote includes/GameModules -o test -Wall -Wextra -lglfw -lGLEW -lGL

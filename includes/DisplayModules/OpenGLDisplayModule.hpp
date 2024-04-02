/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** OpenGLDisplayModule
*/

#ifndef OPENGL_DISPLAY_MODULE_HPP_
#define OPENGL_DISPLAY_MODULE_HPP_

#include "ADisplayModule.hpp"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

class OpenGLDisplayModule : public ADisplayModule {
public:
    OpenGLDisplayModule();
    OpenGLDisplayModule(Map* gameBoard);
    virtual ~OpenGLDisplayModule();

    // Implement pure virtual methods from IDisplayModule
    void initialize();
    void render();
    void processInput();
    void cleanup();

    // Implement pure virtual methods from ADisplayModule
    void display() override;
    char retrieveInput() override;

private:
    GLFWwindow* window;
};

#endif // OPENGL_DISPLAY_MODULE_HPP_

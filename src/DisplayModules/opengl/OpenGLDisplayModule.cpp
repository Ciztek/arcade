/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** OpenGLDisplayModule
*/

#include "OpenGLDisplayModule.hpp"
#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

// Include the GLM library
#include <glm/glm.hpp>
using namespace glm;

// Initialize the static member variable
OpenGLDisplayModule::OpenGLDisplayModule() : window(nullptr) {
    // Initialize GLFW
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        // Handle initialization failure
        return;
    }

    // Create a windowed mode window and its OpenGL context
    window = glfwCreateWindow(800, 600, "OpenGL Display Module", NULL, NULL);
    if (!window) {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        // Handle window creation failure
        return;
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);

    // Initialize GLEW
    if (glewInit() != GLEW_OK) {
        std::cerr << "Failed to initialize GLEW" << std::endl;
        // Handle initialization failure
        return;
    }

    // Check if the OpenGL version is at least 3.3
    if (!GLEW_VERSION_3_3) {
        std::cerr << "OpenGL 3.3 is not supported" << std::endl;
        // Handle unsupported version
        return;
    }
}

OpenGLDisplayModule::~OpenGLDisplayModule() {
    // Terminate GLFW
    glfwTerminate();
}

void OpenGLDisplayModule::initialize() {
    // OpenGL initialization code
}

void OpenGLDisplayModule::render() {
    // OpenGL rendering code
    glClear(GL_COLOR_BUFFER_BIT);
    // Render your scene here
    glfwSwapBuffers(window);
    glfwPollEvents();
}

void OpenGLDisplayModule::processInput() {
    // Input handling code
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, true);
    }
}

void OpenGLDisplayModule::cleanup() {
    // Cleanup code
}

void OpenGLDisplayModule::display() {
    // Display code
}

char OpenGLDisplayModule::retrieveInput() {
    // Input retrieval code
    return ' ';
}

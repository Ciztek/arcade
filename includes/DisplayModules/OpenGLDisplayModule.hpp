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

class OpenGL : public ADisplayModule {
    public:
        /**
         * @brief Construct a new OpenGL object
         *
         * @param gameBoard
         */
        OpenGL(Map *gameBoard) : ADisplayModule(gameBoard) {
            //create window
            if (!glfwInit())
                exit(EXIT_FAILURE);
            window = glfwCreateWindow(640, 480, "Arcade", NULL, NULL);
            if (!window) {
                glfwTerminate();
                exit(EXIT_FAILURE);
            }
            glfwMakeContextCurrent(window);
            glewInit();
        };
        OpenGL() : ADisplayModule() {};

        /**
         * @brief Destroy the OpenGL object
         *
         */
        ~OpenGL() {
            glfwTerminate();
        };
        void draw(std::string tileType, float x, float y);
        void display() override;
        char retrieveInput() override;

    private:
        const float TILE_SIZE = 1.0f;
        GLFWwindow* window;

};

#endif // OPENGL_DISPLAY_MODULE_HPP_

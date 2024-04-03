/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** b
*/

#include <iostream>

#include "ADisplayModule.hpp"

/**
 * @brief OpenGL display module
 *
 */
class OpenGL : public ADisplayModule {
    public:
        /**
         * @brief Construct a new OpenGL object
         *
         */
        OpenGL(Map *gameBoard) : ADisplayModule(gameBoard) {};
        OpenGL() : ADisplayModule() {};

        /**
         * @brief Destroy the OpenGL object
         *
         */
        ~OpenGL() {};
        void display() override;
        char retrieveInput() override;
};

void OpenGL::display()
{
    std::cout << "OpenGL display" << std::endl;
}

char OpenGL::retrieveInput()
{
    std::cout << "OpenGL input" << std::endl;
    return 'a';
}

/**
 * @brief Return a new instance of the OpenGL class
 *
 * @return OpenGL* A new instance of the OpenGL class
 */
extern "C"
OpenGL *entryPoint()
{
    return new OpenGL();
}

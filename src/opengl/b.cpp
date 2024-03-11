/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** b
*/

#include <iostream>

#include "IDisplayModule.hpp"

class OpenGL : public IDisplayModule {
    public:
        OpenGL() {};
        ~OpenGL() {};
        void init() override;
        void stop() override;
        std::string const &getName() const override;
};

void OpenGL::init()
{
    std::cout << "[OpenGl] Init OpenGL library..." << '\n';
}

void OpenGL::stop()
{
    std::cout << "[OpenGl] Stop OpenGL library..." << '\n';
}

std::string const &OpenGL::getName() const
{
    static const std::string name = "OpenGL";
    return name;
}

extern "C"
OpenGL *entryPoint()
{
    return new OpenGL();
}

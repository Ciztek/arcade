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
        /**
         * @brief Construct a new OpenGL object
         *
         */
        OpenGL() {};

        /**
         * @brief Destroy the OpenGL object
         *
         */
        ~OpenGL() {};

        /**
         * @brief Initialize the display module
         *
         */
        void init() override;

        /**
         * @brief Stop the display module
         *
         */
        void stop() override;

        /**
         * @brief Get the Name of the object
         *
         * @return const std::& reference an std::string "OpenGL"
         */
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

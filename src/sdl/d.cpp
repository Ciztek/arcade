/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** b
*/

#include <iostream>

#include "IDisplayModule.hpp"

/**
 * @brief Sdl display module
 *
 */
class Sdl : public IDisplayModule {
    public:
        /**
         * @brief Construct a new Sld object
         *
         */
        Sdl() {};

        /**
         * @brief Destroy the Sld object
         *
         */
        ~Sdl() {};

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
         * @return const std::& reference an std::string "Sdl"
         */
        std::string const &getName() const override;
};

void Sdl::init()
{
    std::cout << "[Sdl] Init Sdl library..." << '\n';
}

void Sdl::stop()
{
    std::cout << "[Sdl] Stop Sdl library..." << '\n';
}

std::string const &Sdl::getName() const
{
    static const std::string name = "Sdl";
    return name;
}

/**
 * @brief Return a new instance of the Sdl class
 *
 * @return Sdl* A new instance of the Sdl class
 */
extern "C"
Sdl *entryPoint()
{
    return new Sdl();
}

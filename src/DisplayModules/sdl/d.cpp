/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** d
*/

#include <iostream>

#include "ADisplayModule.hpp"

/**
 * @brief Sdl display module
 *
 */
class Sdl : public ADisplayModule {
    public:
        /**
         * @brief Construct a new Sdl object
         *
         */
        Sdl(Map *gameBoard) : ADisplayModule(gameBoard) {};
        Sdl() : ADisplayModule() {};

        /**
         * @brief Destroy the Sdl object
         *
         */
        ~Sdl() {};
        void display() override;
        char retrieveInput() override;
};

void Sdl::display()
{
    std::cout << "Sdl display" << std::endl;
}

char Sdl::retrieveInput()
{
    std::cout << "Sdl input" << std::endl;
    return 'a';
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

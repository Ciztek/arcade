/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** a
*/

#include <iostream>

#include "ADisplayModule.hpp"

/**
 * @brief Ncurses display module
 *
 */
class Ncurses : public ADisplayModule {
    public:
        /**
         * @brief Construct a new Ncurses object
         *
         */
        Ncurses(Map *gameBoard) : ADisplayModule(gameBoard) {};
        Ncurses() : ADisplayModule() {};

        /**
         * @brief Destroy the Ncurses object
         *
         */
        ~Ncurses() {};
        void display() override;
        char retrieveInput() override;
};

void Ncurses::display()
{
    std::cout << "Ncurses display" << std::endl;
}

char Ncurses::retrieveInput()
{
    std::cout << "Ncurses input" << std::endl;
    return 'a';
}

/**
 * @brief Return a new instance of the Ncurses class
 *
 * @return Ncurses* A new instance of the Ncurses class
 */
extern "C"
Ncurses *entryPoint()
{
    return new Ncurses();
}

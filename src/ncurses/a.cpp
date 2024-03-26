/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** a
*/

#include <iostream>

#include "ADisplayModule.hpp"
#include "IDisplayModule.hpp"

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
        Ncurses(Map *gameBoard) : _gameBoard(gameBoard) {};

        /**
         * @brief Destroy the Ncurses object
         *
         */
        ~Ncurses() {};
};

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

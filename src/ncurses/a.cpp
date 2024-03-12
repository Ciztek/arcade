/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** a
*/

#include <iostream>

#include "IDisplayModule.hpp"

/**
 * @brief Ncurses display module
 *
 */
class Ncurses : public IDisplayModule {
    public:
        /**
         * @brief Construct a new Ncurses object
         *
         */
        Ncurses() {};

        /**
         * @brief Destroy the Ncurses object
         *
         */
        ~Ncurses() {};

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
         * @return const std::& reference an std::string "ncurses"
         */
        std::string const &getName() const override;
};

void Ncurses::init()
{
    std::cout << "[libncurses] Init ncurses library..." << '\n';
}

void Ncurses::stop()
{
    std::cout << "[libncurses] Stop ncurses library..." << '\n';
}

std::string const &Ncurses::getName() const
{
    static const std::string name = "ncurses";
    return name;
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

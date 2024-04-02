/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** b
*/

#include <iostream>

#include "IGameModule.hpp"

/**
 * @brief Pacman game module
 *
 */
class Pacman : public IGameModule {
    public:
        /**
         * @brief Construct a new Pacman object
         *
         */
        Pacman() {};

        /**
         * @brief Destroy the Pacman object
         *
         */
        ~Pacman() {};

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
         * @return const std::& reference an std::string "Pacman"
         */
        std::string const &getGame() const override;
};

void Pacman::init()
{
    std::cout << "[Pacman] Init Pacman library..." << '\n';
}

void Pacman::stop()
{
    std::cout << "[Pacman] Stop Pacman library..." << '\n';
}

std::string const &Pacman::getGame() const
{
    static const std::string name = "Pacman";
    return name;
}

/**
 * @brief Return a new instance of the Pacman class
 *
 * @return Pacman* A new instance of the Pacman class
 */
extern "C"
Pacman *entryPoint()
{
    return new Pacman();
}

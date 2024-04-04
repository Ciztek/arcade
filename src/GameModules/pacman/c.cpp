/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** b
*/

#include <iostream>
#include <memory>

#include "AGameModule.hpp"
#include "Map.hpp"

AssetMap ASSETS = {
    {"pacman", "./assets/pacman/pacman"},
    {"ghost", "./assets/pacman/ghost"},
    {"wall", "./assets/pacman/wall"},
    {"fruit", "./assets/pacman/fruit"},
    {"empty", "./assets/pacman/empty"},
    {"player", "./assets/pacman/player"},
};
/**
 * @brief Pacman game module
 *
 */
class Pacman : public AGameModule {
    public:
        /**
         * @brief Construct a new Pacman object
         *
         */
        Pacman() {};
        Pacman(Map *gameBoard) : AGameModule(gameBoard, ASSETS) {};

        /**
         * @brief Destroy the Pacman object
         *
         */
        ~Pacman() {};
        void updateGame() override;
        void handleInput(char) override;
};

void Pacman::updateGame()
{
    std::cout << "Pacman update" << std::endl;
}

void Pacman::handleInput(char input)
{
    std::cout << "Pacman input: " << input << std::endl;
}

/**
 * @brief Return a new instance of the Pacman class
 *
 * @return Pacman* A new instance of the Pacman class
 */
extern "C"
Pacman *gameEntryPoint()
{
    return new Pacman();
}

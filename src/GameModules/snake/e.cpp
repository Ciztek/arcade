/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** b
*/

#include <iostream>

#include "AGameModule.hpp"
#include "Map.hpp"

AssetMap ASSETS = {
    {"snake", "./assets/snake/snake"},
    {"ghost", "./assets/snake/ghost"},
    {"wall", "./assets/snake/wall"},
    {"fruit", "./assets/snake/fruit"},
    {"empty", "./assets/snake/empty"},
    {"player", "./assets/snake/player"},
};

/**
 * @brief Snake game module
 *
 */
class Snake : public AGameModule {
    public:
        /**
         * @brief Construct a new Snake object
         *
         */
        Snake() {};
        Snake(Map *gameBoard) : AGameModule(gameBoard, ASSETS) {};

        /**
         * @brief Destroy the Snake object
         *
         */
        ~Snake() {};
        void updateGame() override;
        void handleInput(char) override;
};

void Snake::updateGame()
{
    std::cout << "Snake update" << std::endl;
}

void Snake::handleInput(char input)
{
    std::cout << "Snake input: " << input << std::endl;
}

/**
 * @brief Return a new instance of the Snake class
 *
 * @return Snake* A new instance of the Snake class
 */
extern "C"
Snake *gameEntryPoint()
{
    return new Snake();
}

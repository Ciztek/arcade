/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** b
*/

#include <iostream>

#include "IGameModule.hpp"

/**
 * @brief Snake game module
 *
 */
class Snake : public IGameModule {
    public:
        /**
         * @brief Construct a new Snake object
         *
         */
        Snake() {};

        /**
         * @brief Destroy the Snake object
         *
         */
        ~Snake() {};

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
         * @return const std::& reference an std::string "Snake"
         */
        std::string const &getGame() const override;
};

void Snake::init()
{
    std::cout << "[Snake] Init Snake library..." << '\n';
}

void Snake::stop()
{
    std::cout << "[Snake] Stop Snake library..." << '\n';
}

std::string const &Snake::getGame() const
{
    static const std::string name = "Snake";
    return name;
}

/**
 * @brief Return a new instance of the Snake class
 *
 * @return Snake* A new instance of the Snake class
 */
extern "C"
Snake *entryPoint()
{
    return new Snake();
}

/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** b
*/

#include <iostream>

#include "IGameModule.hpp"
class Snake : public IGameModule {
    public:
        Snake() {};
        ~Snake() {};
        void init() override;
        void stop() override;
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

extern "C"
Snake *entryPoint()
{
    return new Snake();
}

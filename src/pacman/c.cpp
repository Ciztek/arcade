/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** b
*/

#include <iostream>

#include "IGameModule.hpp"

class Pacman : public IGameModule {
    public:
        Pacman() {};
        ~Pacman() {};
        void init() override;
        void stop() override;
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

extern "C"
Pacman *entryPoint()
{
    return new Pacman();
}

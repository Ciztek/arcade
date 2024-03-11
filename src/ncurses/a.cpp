/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** a
*/

#include <iostream>

#include "IDisplayModule.hpp"

class Ncurses : public IDisplayModule {
    public:
        Ncurses() {};
        ~Ncurses() {};
        void init() override;
        void stop() override;
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

extern "C"
Ncurses *entryPoint()
{
    return new Ncurses();
}

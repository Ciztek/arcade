/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** b
*/

#include <iostream>

#include "IDisplayModule.hpp"

class Sld : public IDisplayModule {
    public:
        Sld() {};
        ~Sld() {};
        void init() override;
        void stop() override;
        std::string const &getName() const override;
};

void Sld::init()
{
    std::cout << "[Sdl] Init Sld library..." << '\n';
}

void Sld::stop()
{
    std::cout << "[Sdl] Stop Sld library..." << '\n';
}

std::string const &Sld::getName() const
{
    static const std::string name = "Sld";
    return name;
}

extern "C"
Sld *entryPoint()
{
    return new Sld();
}

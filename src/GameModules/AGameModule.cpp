/*
** EPITECH PROJECT, 2024
** arcade [WSL: Ubuntu]
** File description:
** AGameModule
*/

#include "AGameModule.hpp"

AGameModule::AGameModule()
{
}


AGameModule::AGameModule(Map *gameBoard) : _gameBoard(gameBoard)
{
}

AGameModule::~AGameModule()
{
}

std::map<std::string, std::string> AGameModule::getAssets() const
{
    return _assets;
}

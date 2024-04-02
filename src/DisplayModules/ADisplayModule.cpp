/*
** EPITECH PROJECT, 2024
** arcade [WSL: Ubuntu]
** File description:
** ADisplayModule
*/

#include "ADisplayModule.hpp"
#include "Map.hpp"

ADisplayModule::ADisplayModule() : _gameBoard(nullptr) {}

ADisplayModule::ADisplayModule(Map *gameBoard) : _gameBoard(gameBoard) {}

ADisplayModule::~ADisplayModule() {}

void ADisplayModule::setAssets(IGameModule *game) {
    _assets = game->getAssets();
}

void ADisplayModule::setMap(Map *map) {
    _gameBoard = map;
}

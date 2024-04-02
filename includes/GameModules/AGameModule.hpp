/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** AGameModule
*/

#ifndef AGAMEMODULE_HPP_
    #define AGAMEMODULE_HPP_

    #include <map>
    #include <string>

    #include "Map.hpp"
    #include "IGameModule.hpp"

typedef std::map<std::string, std::string> AssetMap;

class AGameModule : public IGameModule {
    private:
    protected:
        Map *_gameBoard;
        AssetMap _assets;
    public:
        /**
         * @brief Construct a new AGameModule object
         * 
         * @param gameBoard the map of the game
         */
        AGameModule(Map *gameBoard);
        AGameModule(AssetMap assets);
        AGameModule(Map *gameBoard, AssetMap assets);
        AGameModule();

        ~AGameModule();

        [[nodiscard]] std::map<std::string, std::string> getAssets() const final;
};

#endif /* !AGAMEMODULE_HPP_ */

/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** ADisplayModule
*/

#ifndef ADISPLAYMODULE_HPP_
    #define ADISPLAYMODULE_HPP_

    #include <map>
    #include <string>

    #include "IDisplayModule.hpp"
    #include "IGameModule.hpp"
    #include "Map.hpp"

class ADisplayModule : IDisplayModule {
    private:
    protected:
        /**
         * @brief Map containing the assets
         * the key is the name of the asset like "player" or "wall"
         * the value is the path to the asset
         *
         */
        std::map<std::string, std::string> _assets;
        /**
         * @brief Map containing the actual state of the map
         *
         */
        Map *_gameBoard;
    public:
        ADisplayModule();
        ADisplayModule(Map *gameBoard);
        ~ADisplayModule();
        /**
         * @brief set the assets for the display module
         * @brief add the asset to the map
         * @param game where the assets are stored
         */
        void setAssets(IGameModule *game);
        /**
         * @brief set the actual state of the map
         * @param map the map representation
         */
        void setMap(Map *map);
};

#endif /* !ADISPLAYMODULE_HPP_ */

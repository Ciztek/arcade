/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** Core
*/

#ifndef CORE_HPP_
    #define CORE_HPP_

    #include "IDisplayModule.hpp"
    #include "IGameModule.hpp"
    #include "Map.hpp"

class Core {
    private:
        /**
         * @brief Pointer to an instance of the display module
         *
         */
        IDisplayModule *__display;
        /**
         * @brief Pointer to an instance of the game module
         *
         */
        IGameModule *__game;
        /**
         * @brief Pointer to an instance of the map
         *
         */
        Map *__map;
    public:
        Core(char **av);
        ~Core();
        /**
         * @brief function to run the core of the program
         * it will load the game, the display, the map and the menu
         */
        void run();
        /**
         * @brief This will load the game
         *
         */
        void loadGame();
        /**
         * @brief Load the display
         *
         */
        void loadDisplay();
        /**
         * @brief Load the map
         *
         */
        void loadMap();
        /**
         * @brief Load the menu
         *
         */
        void loadMenu();
};

#endif /* !CORE_HPP_ */

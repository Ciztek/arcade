/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** IDisplayModule
*/

#ifndef IDISPLAYMODULE_HPP_
    #define IDISPLAYMODULE_HPP_

    #include "Map.hpp"
/**
 * @brief Interface class for display module
 *
*/
class IDisplayModule {
    private:
    protected:
    public:
        /**
         * @brief Destroy the IDisplayModule object with a g++ generated destructor
         *
         */
        virtual ~IDisplayModule () = default;
        /**
         * @brief get the input from the user for the display module
         *
         * @return char the keybind pressed by the user
         */
        virtual char retrieveInput() = 0;
        /**
         * @brief display all the assets
         *
         */
        virtual void display() = 0;
        /**
         * @brief set the actual state of the map
         * @param map the map representation
         */
        void setMap(Map *map);
        /**
         * @brief set the assets for the display module
         * @brief add the asset to the map
         * @param asset the asset to set
         */
        void setAssets(std::pair<std::string, std::string> asset);
};

#endif /* !IDISPLAYMODULE_HPP_ */

/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** Map
*/

#ifndef MAP_HPP_
#define MAP_HPP_

#include <string>
#include <vector>

class Map {
    private:
        /**
         * @brief Readed buffer from the file
         *
         */
        std::string __rawMap;
        /**
         * @brief Transformed map
         *
         */
        std::vector<std::vector<std::string>> __map;
    protected:
    public:
        /**
         * @brief Construct a new Map object
         *
         */
        Map();
        /**
         * @brief Destroy the Map object
         *
         */
        ~Map();
        /**
         * @brief read the map at the given path and store it in __rawMap
         *
         * @param path path to the map file default value is "./map"
         */
        void loadFromFile(std::string path = "./map");
        /**
         * @brief transform the map from __rawMap to __map
         *
         */
        void transformMap();
        /**
         * @brief get the map
         *
         * @return std::vector<std::vector<std::string>> the map
         */
        std::vector<std::vector<std::string>> getMap();
        /**
         * @brief update the map
         *
         * @param newMap the new map
         */
        void updateMap(std::vector<std::vector<std::string>> newMap);
};

#endif /* !MAP_HPP_ */

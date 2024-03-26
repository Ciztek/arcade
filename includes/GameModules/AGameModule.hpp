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

class AGameModule : public IGameModule {
    private:
    protected:
        Map *_gameBoard;
        std::map<std::string, std::string> _assets;
    public:
        /**
         * @brief Construct a new AGameModule object
         * 
         * @param gameBoard the map of the game
         */
        AGameModule(Map *gameBoard);
        ~AGameModule();

        void updateGame() final;
        /**
         * @brief 
         * 
         * @param input char representing the key pressed by the user
         */
        void handleInput(char input) final;
        [[nodiscard]] std::map<std::string, std::string> getAssets() const final;
};

#endif /* !AGAMEMODULE_HPP_ */

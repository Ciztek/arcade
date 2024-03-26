/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** IGameModule
*/

#ifndef IGAME_MODULE_HPP
    #define IGAME_MODULE_HPP

    #include <map>
    #include <string>

/**
 * @brief Interface class for game module
 *
 */
class IGameModule {
    private:
    protected:
    public:
        /**
         * @brief Destroy the IGameModule object with a g++ generated destructor
         *
         */
        virtual ~IGameModule () = default;
        /**
         * @brief handle input for the game module
         * @param input the keybind pressed by the user
         */
        virtual void handleInput(char input) = 0;
        /**
         * @brief update the game state using other methods and data
         *
         */
        virtual void updateGame() = 0;
        /**
         * @brief get the assets of the game module
         * nodiscard is a c++17 attribute that tells the compiler to warn the user if the return value is not used
         * @return std::map<std::string, std::string> the assets
         *
         */
        [[nodiscard]]
        virtual std::map<std::string, std::string> getAssets() const = 0;
};

#endif /* !IGAME_MODULE_HPP */

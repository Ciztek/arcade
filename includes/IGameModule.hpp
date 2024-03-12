/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** IGameModule
*/

#ifndef IGAME_MODULE_HPP
    #define IGAME_MODULE_HPP

    #include <string>

/**
 * @brief Interface class for game module
 *
 */
class IGameModule {
    public:
        /**
         * @brief Destroy the IGameModule object with a g++ generated destructor
         *
         */
        virtual ~IGameModule () = default;
        /**
         * @brief Initialize the display module
         *
         */
        virtual void init() = 0;
        /**
         * @brief Stop the display module
         *
         */
        virtual void stop() = 0;
        /**
         * @brief Get the Name of the object
         *
         * @return const std::& reference to the name of the object
         */
        virtual const std:: string &getGame () const = 0;
};

#endif /* !IGAME_MODULE_HPP */

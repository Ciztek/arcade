/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** IDisplayModule
*/

#ifndef IDISPLAYMODULE_HPP_
    #define IDISPLAYMODULE_HPP_

    #include <string>

/**
 * @brief Interface class for display module
 *
 */
class IDisplayModule {
    public:
        /**
         * @brief Destroy the IDisplayModule object with a g++ generated destructor
         *
         */
        virtual ~IDisplayModule () = default;
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
        virtual const std:: string &getName () const = 0;
};

#endif /* !IDISPLAYMODULE_HPP_ */

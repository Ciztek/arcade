/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** IGameModule
*/

#ifndef IGAME_MODULE_HPP
    #define IGAME_MODULE_HPP

    #include <string>

class IGameModule {
    public:
        virtual ~IGameModule () = default;
        virtual void init() = 0;
        virtual void stop() = 0;
        virtual const std:: string &getGame () const = 0;
};

#endif /* !IGAME_MODULE_HPP */

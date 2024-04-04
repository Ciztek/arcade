/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** SdlDisplayModule
*/

#ifndef SDLDISPLAYMODULE_HPP_
    #define SDLDISPLAYMODULE_HPP_

#include "ADisplayModule.hpp"

#include <SDL2/SDL.h>

/**
 * @brief Sdl display module
 *
 */
class Sdl : public ADisplayModule {
    public:
        /**
         * @brief Construct a new Sdl object
         *
         */
        Sdl(Map *gameBoard) : ADisplayModule(gameBoard) {
            //create window
            if (SDL_Init(SDL_INIT_VIDEO) != 0) {
                SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
                exit(EXIT_FAILURE);
            }

            window = SDL_CreateWindow(
                "Arcade",                  // window title
                SDL_WINDOWPOS_UNDEFINED,           // initial x position
                SDL_WINDOWPOS_UNDEFINED,           // initial y position
                640,                               // width, in pixels
                480,                               // height, in pixels
                SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE  // flags
            );
            if (window == NULL) {
                SDL_Log("Unable to create window: %s", SDL_GetError());
                exit(EXIT_FAILURE);
            }

            renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
        };
        Sdl() : ADisplayModule() {};

        /**
         * @brief Destroy the Sdl object
         *
         */
        ~Sdl() {
            SDL_DestroyWindow(window);
            SDL_Quit();
        };
        void draw(std::string tileType, int x, int y);

        void display() override;
        char retrieveInput() override;

    private:
        const int TILE_SIZE = 1;
        SDL_Window* window;
        SDL_Renderer* renderer;
};

#endif /* !SDLDISPLAYMODULE_HPP_ */

/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** d
*/

#include "SdlDisplayModule.hpp"

// the map is a 2D array of stringsn each string is a tile type the draw function need to print a square of a specific color in function of the tile type

void Sdl::draw(std::string tileType, int x, int y)
{
    if (tileType == "wall") {   
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Black color
    } else if (tileType == "player") {
        SDL_SetRenderDrawColor(renderer, 255, 255, 0, 255); // Yellow color
    } else if (tileType == "enemy") {
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Red color
    } else if (tileType == "fruit") {
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255); // Green color
    } else if (tileType == "empty") {
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // White color
    }

    // Draw a square at position (x, y) with the constant size
    SDL_Rect rect = {x, y, TILE_SIZE, TILE_SIZE};
    SDL_RenderFillRect(renderer, &rect);

    // Update the window
    SDL_RenderPresent(renderer);
}

void Sdl::display()
{
    auto map = _gameBoard->getMap();

    // Assuming map is a 2D array or similar structure
    for (size_t i = 0; i < map.size(); i++) {
        for (size_t j = 0; j < map[i].size(); j++) {
            // Draw each element of the map
            draw(map[i][j], i * TILE_SIZE, j * TILE_SIZE);
        }
    }
}

char Sdl::retrieveInput()
{
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            return 'q';
        }
        if (event.type == SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
                case SDLK_UP:
                    return 'z';
                case SDLK_DOWN:
                    return 's';
                case SDLK_LEFT:
                    return 'q';
                case SDLK_RIGHT:
                    return 'd';
                case SDLK_ESCAPE:
                    return 'q';
                default:
                    break;
            }
        }
    }
    return 0;
}

/**
 * @brief Return a new instance of the Sdl class
 *
 * @return Sdl* A new instance of the Sdl class
 */
extern "C"
Sdl *graphicalEntryPoint()
{
    return new Sdl();
}

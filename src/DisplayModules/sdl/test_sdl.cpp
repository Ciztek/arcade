/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** test_sdl
*/

#include <SDL2/SDL.h>

void createWindow() {
    SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2

    // Create an application window with the following settings:
    SDL_Window* window = SDL_CreateWindow(
        "An SDL2 window",                  // window title
        SDL_WINDOWPOS_UNDEFINED,           // initial x position
        SDL_WINDOWPOS_UNDEFINED,           // initial y position
        640,                               // width, in pixels
        480,                               // height, in pixels
        SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE  // flags
    );

    // Check that the window was successfully created
    if (window == NULL) {
        // In the case that the window could not be made...
        printf("Could not create window: %s\n", SDL_GetError());
        return;
    }

    // The window is open: enter program loop (see SDL_PollEvent)
    SDL_Event event;
    bool quit = false;

    while (!quit){
        while (SDL_PollEvent(&event)){
            if (event.type == SDL_QUIT){
                quit = true;
            }
            if (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_RESIZED){
                printf("Window resized to %dx%d.\n", event.window.data1, event.window.data2);
            }
        }
    }

    // Close and destroy the window
    SDL_DestroyWindow(window);

    // Clean up
    SDL_Quit();
}

int main(void)
{
    createWindow();
    return 0;
}

// how to compile:
// g++ -o test_sdl test_sdl.cpp -lSDL2

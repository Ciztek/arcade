/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** b
*/

#include <cstddef>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

#include "OpenGLDisplayModule.hpp"


// AssetMap ASSETS = {
//     {"enemy", "./assets/pacman/ghost"},
//     {"wall", "./assets/pacman/wall"},
//     {"fruit", "./assets/pacman/fruit"},
//     {"empty", "./assets/pacman/empty"},
//     {"player", "./assets/pacman/player"},
// };
// the map is a 2D array of stringsn each string is a tile type the draw function need to print a square of a specific color in function of the tile type

void OpenGL::draw(std::string tileType, float x, float y) {
    if (tileType == "wall") {
        glColor3f(0.5f, 0.5f, 0.5f); // Grey color
    } else if (tileType == "player") {
        glColor3f(1.0f, 1.0f, 0.0f); // Yellow color
    } else if (tileType == "enemy") {
        glColor3f(1.0f, 0.0f, 0.0f); // Red color
    } else if (tileType == "fruit") {
        glColor3f(0.0f, 1.0f, 0.0f); // Green color
    } else if (tileType == "empty") {
        glColor3f(1.0f, 1.0f, 1.0f); // White color
    }

    // Draw a square at position (x, y) with the constant size
    glRectf(x, y, x + TILE_SIZE, y + TILE_SIZE);

    // Update the window
    glfwSwapBuffers(window);
    glfwPollEvents();
}

/**
 * @brief OpenGL display module
 *
 */
void OpenGL::display() {
    auto map = _gameBoard->getMap();

    // Assuming map is a 2D array or similar structure
    for (size_t i = 0; i < map.size(); i++) {
        for (size_t j = 0; j < map[i].size(); j++) {
            // Draw each element of the map
            draw(map[i][j], i * TILE_SIZE, j * TILE_SIZE);
        }
    }

    // Swap buffers to display the drawn frame
    glfwSwapBuffers(window);
    glfwPollEvents();
}


// GLFW_KEY_UP -> U
// GLFW_KEY_DOWN -> D
// GLFW_KEY_LEFT -> L
// GLFW_KEY_RIGHT -> R
// GLFW_KEY_A -> S
// GLFW_KEY_Z -> G
// GLFW_KEY_E -> F
/**
 * @brief Retrieve input from the user and return it as a string
 *
 * @return char The input retrieved
 */
char OpenGL::retrieveInput()
{
    if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS) {
        return 'U';
    } else if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS) {
        return 'D';
    } else if (glfwGetKey(window, GLFW_KEY_LEFT) == GLFW_PRESS) {
        return 'L';
    } else if (glfwGetKey(window, GLFW_KEY_RIGHT) == GLFW_PRESS) {
        return 'R';
    } else if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
        return 'S';
    } else if (glfwGetKey(window, GLFW_KEY_Z) == GLFW_PRESS) {
        return 'G';
    } else if (glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS) {
        return 'F';
    }
    return ' ';
}

/**
 * @brief Return a new instance of the OpenGL class
 *
 * @return OpenGL* A new instance of the OpenGL class
 */
extern "C"

OpenGL *graphicalEntryPoint()
{
    return new OpenGL();
}

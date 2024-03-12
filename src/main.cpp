/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** main
*/

#include <dirent.h>
#include <dlfcn.h>
#include <iostream>
#include <stdexcept>
#include <sys/types.h>

#include "DLLoader.hpp"
#include "IDisplayModule.hpp"
#include "IGameModule.hpp"

/**
 * @brief Iter on file within a directory and apply an action to it
 *
 * @param path Path to the directory within you will iterate
 * @param cb Callback function to apply to each file that take the path as parameter and return void
 */
void iterFiles(const char *path, void (*cb)(const char *))
{
    DIR *dir = opendir(path);
    struct dirent *entry;

    if (dir == nullptr)
        throw std::runtime_error("Error: opendir");
    do {
        entry = readdir(dir);
        if (entry == nullptr)
            break;
        if (entry->d_name[0] == '.')
            continue;
        cb((std::string(path) + "/" + std::string(entry->d_name)).c_str());
    } while (entry != nullptr);
    closedir(dir);
}

/**
 * @brief Main function of the program
 *
 * @return 0 if success, 84 if failure
 */
int main(void)
{
    try {
        iterFiles("./lib", [](const char *path) -> void {
            DLLoader<IDisplayModule> loader(path);
            IDisplayModule *module = loader.getInstance("entryPoint");
            module->init();
            std::cout << module->getName() << '\n';
            module->stop();
            delete module;
        });
    } catch (const std::runtime_error &e) {
        std::cerr << e.what() << '\n';
        return 84;
    }
    return 0;
}

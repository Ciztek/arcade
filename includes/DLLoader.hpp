/*
** EPITECH PROJECT, 2024
** arcade
** File description:
** DLLoader
*/

#ifndef DLLOADER_HPP_
#define DLLOADER_HPP_

#include <dlfcn.h>
#include <stdexcept>

/**
 * @brief Class to load a dynamic library and get the class instance defined in it
 *
 * @tparam T Class to load
 */
template <typename T>
class DLLoader {
    public:
        /**
         * @brief Construct a new DLLoader object
         *
         * @param path path to the shared object to load
         */
        DLLoader(const char *path)
        {
            _handle = dlopen(path, RTLD_LAZY);
            if (_handle == nullptr)
                throw std::runtime_error(dlerror());
        }
        /**
         * @brief Destroy the DLLoader object
         *
         */
        ~DLLoader()
        {
            dlclose(_handle);
        }

        /**
         * @brief Get the Instance object
         *
         * @param symbol name of the entry point that return the instance of the class
         * @return T* pointer to the instance of the class
         */
        T *getInstance(const char *symbol)
        {
            auto entryPoint = reinterpret_cast<T *(*)()>(dlsym(_handle, symbol));
            if (entryPoint == nullptr)
                throw std::runtime_error(dlerror());
            return entryPoint();
        }

    private:
        /**
         * @brief data that store the adress of the shared object like an file descriptor
         */
        void *_handle;
};
#endif /* !DLLOADER_HPP_ */

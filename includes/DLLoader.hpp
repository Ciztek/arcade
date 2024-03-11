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

template <typename T>
class DLLoader {
    public:
        DLLoader(const char *path)
        {
            _handle = dlopen(path, RTLD_LAZY);
            if (_handle == nullptr)
                throw std::runtime_error(dlerror());
        }
        ~DLLoader()
        {
            dlclose(_handle);
        }
        T *getInstance(const char *symbol)
        {
            T *(*entryPoint)() = reinterpret_cast<T *(*)()>(dlsym(_handle, symbol));
            if (entryPoint == nullptr)
                throw std::runtime_error(dlerror());
            return entryPoint();
        }

    private:
        void *_handle;
};
#endif /* !DLLOADER_HPP_ */

##
## EPITECH PROJECT, 2024
## arcade
## File description:
## sources.mk
##

VPATH := src
SRC := main.cpp

VPATH += src/DisplayModules

VPATH += src/DisplayModules/ncurses
NCURSES_SRC := ADisplayModule.cpp
NCURSES_SRC += a.cpp

VPATH += src/DisplayModules/opengl
OPENGL_SRC := ADisplayModule.cpp
OPENGL_SRC += b.cpp

VPATH += src/DisplayModules/sdl
SDL_SRC := ADisplayModule.cpp
SDL_SRC += d.cpp

VPATH += src/GameModules
VPATH += src/GameModules/snake
SNAKE_SRC := AGameModule.cpp
SNAKE_SRC += e.cpp

VPATH += src/GameModules/pacman
PAC_SRC := AGameModule.cpp
PAC_SRC += c.cpp

VPATH += tests
TSRC := testSuite.cpp

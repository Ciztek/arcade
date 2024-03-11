##
## EPITECH PROJECT, 2024
## arcade
## File description:
## sources.mk
##

VPATH := src
SRC := main.cpp

VPATH += src/ncurses
NCURSES_SRC := a.cpp

VPATH += src/opengl
OPENGL_SRC := b.cpp

VPATH += src/pacman
PAC_SRC := c.cpp

VPATH += src/sdl
SDL_SRC := d.cpp

VPATH += src/snake
SNAKE_SRC := e.cpp

VPATH += tests
TSRC := testSuite.cpp

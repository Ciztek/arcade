##
## EPITECH PROJECT, 2024
## arcade
## File description:
## config.mk
##

CC := g++

CFLAGS := -Wall -Wextra -std=gnu++20
CFLAGS += -iquote ./includes -iquote ./includes/DisplayModules -iquote ./includes/GameModules
CFLAGS += -fno-gnu-unique

LIB_CFLAGS := -shared -fPIC
LIB_CFLAGS += $(CFLAGS)

LDFLAGS := -ldl

ifeq ($(FORCE_DEBUG),1)
  CFLAGS += -D DEBUG_MODE
endif

BUILD_DIR := .build
LIB_DIR := lib

NAME := arcade
NAME_DEBUG := debug
NAME_ANGRY := angry
UNIT := unittests

NAME_PACMAN := arcade_pacman.so
NAME_PACMAN_DEBUG := debug_pacman.so
NAME_PACMAN_ANGRY := angry_pacman.so

NAME_SNAKE := arcade_snake.so
NAME_SNAKE_DEBUG := debug_snake.so
NAME_SNAKE_ANGRY := angry_snake.so

NAME_SDL := arcade_sdl2.so
NAME_SDL_DEBUG := debug_sdl2.so
NAME_SDL_ANGRY := angry_sdl2.so

NAME_NCURSES := arcade_ncurses.so
NAME_NCURSES_DEBUG := debug_ncurses.so
NAME_NCURSES_ANGRY := angry_ncurses.so

NAME_OPENGL := arcade_opengl.so
NAME_OPENGL_DEBUG := debug_opengl.so
NAME_OPENGL_ANGRY := angry_opengl.so

ifeq ($(SRC),)
    $(error No sources)
endif

ifeq ($(PAC_SRC),)
    $(error No pacman sources)
endif

ifeq ($(SNAKE_SRC),)
    $(error No snake sources)
endif

ifeq ($(SDL_SRC),)
    $(error No sdl2 sources)
endif

ifeq ($(NCURSES_SRC),)
    $(error No ncurses sources)
endif

ifeq ($(OPENGL_SRC),)
    $(error No opengl sources)
endif

ifeq ($(VPATH),)
    $(error No search path)
endif

ifeq ($(TSRC),)
   $(warning No unittests)
endif

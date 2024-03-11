##
## EPITECH PROJECT, 2024
## arcade
## File description:
## debug.mk
##

%.cpp:

BUILD_DIR ?= .build
LIB_DIR ?= lib

DEBUG_OBJ := $(SRC:%.c=$(BUILD_DIR)/debug/arcade/%.o)

$(NAME_DEBUG): CFLAGS += -D DEBUG_MODE -g3
$(NAME_DEBUG): $(DEBUG_OBJ)
	$Q $(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS) $(LDLIBS)
	$(call LOG,":g$@")

$(BUILD_DIR)/debug/arcade/%.o: HEADER += "debug"
$(BUILD_DIR)/debug/arcade/%.o: %.c
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

DEBUG_PAC_OBJ := $(PAC_SRC:%.c=$(BUILD_DIR)/debug/pacman/%.o)

$(NAME_PACMAN_DEBUG): CFLAGS += -D DEBUG_MODE -g3
$(NAME_PACMAN_DEBUG): $(DEBUG_PAC_OBJ)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/debug/pacman/%.o: HEADER
$(BUILD_DIR)/debug/pacman/%.o: %.c
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

DEBUG_SNAKE_OBJ := $(SNAKE_SRC:%.c=$(BUILD_DIR)/debug/snake/%.o)

$(NAME_SNAKE_DEBUG): CFLAGS += -D DEBUG_MODE -g3
$(NAME_SNAKE_DEBUG): $(DEBUG_SNAKE_OBJ)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/debug/snake/%.o: HEADER
$(BUILD_DIR)/debug/snake/%.o: %.c
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

DEBUG_SDL_OBJ := $(SDL_SRC:%.c=$(BUILD_DIR)/debug/sdl2/%.o)

$(NAME_SDL_DEBUG): LDFLAGS += -lSDL2
$(NAME_SDL_DEBUG): CFLAGS += -D DEBUG_MODE -g3
$(NAME_SDL_DEBUG): $(DEBUG_SDL_OBJ)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/debug/sdl2/%.o: HEADER
$(BUILD_DIR)/debug/sdl2/%.o: %.c
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

DEBUG_NCURSES_OBJ := $(NCURSES_SRC:%.c=$(BUILD_DIR)/debug/ncurses/%.o)

$(NAME_NCURSES_DEBUG): LDFLAGS += -lncurses
$(NAME_NCURSES_DEBUG): CFLAGS += -D DEBUG_MODE -g3
$(NAME_NCURSES_DEBUG): $(DEBUG_NCURSES_OBJ)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/debug/ncurses/%.o: HEADER
$(BUILD_DIR)/debug/ncurses/%.o: %.c
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

DEBUG_OPENGL_OBJ := $(OPENGL_SRC:%.c=$(BUILD_DIR)/debug/opengl/%.o)

$(NAME_OPENGL_DEBUG): LDFLAGS += -lGL
$(NAME_OPENGL_DEBUG): CFLAGS += -D DEBUG_MODE -g3
$(NAME_OPENGL_DEBUG): $(DEBUG_OPENGL_OBJ)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/debug/opengl/%.o: HEADER
$(BUILD_DIR)/debug/opengl/%.o: %.c
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

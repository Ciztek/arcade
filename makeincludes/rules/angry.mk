##
## EPITECH PROJECT, 2024
## arcade
## File description:
## angry.mk
##

%.cpp:

BUILD_DIR ?= .build
LIB_DIR ?= lib

ANGRY_OBJ := $(SRC:%.cpp=$(BUILD_DIR)/angry/arcade/%.o)

$(NAME_ANGRY): CFLAGS += -g3 -D DEBUG_MODE -fsanitize=address,leak,undefined
$(NAME_ANGRY): LDFLAGS += -lasan
$(NAME_ANGRY): $(ANGRY_OBJ)
	$Q $(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS) $(LDLIBS)
	$(call LOG,":g$@")

$(BUILD_DIR)/angry/arcade/%.o: HEADER += "angry"
$(BUILD_DIR)/angry/arcade/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

ANGRY_PAC_OBJ := $(PAC_SRC:%.cpp=$(BUILD_DIR)/angry/pacman/%.o)

$(NAME_PACMAN_ANGRY): CFLAGS += -g3 -D DEBUG_MODE
$(NAME_PACMAN_ANGRY): CFLAGS += -fsanitize=address,leak,undefined
$(NAME_PACMAN_ANGRY): LDFLAGS += -lasan
$(NAME_PACMAN_ANGRY): $(ANGRY_PAC_OBJ)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/angry/pacman/%.o: HEADER
$(BUILD_DIR)/angry/pacman/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

ANGRY_SNAKE_OBJ := $(SNAKE_SRC:%.cpp=$(BUILD_DIR)/angry/snake/%.o)

$(NAME_SNAKE_ANGRY): CFLAGS += -g3 -D DEBUG_MODE
$(NAME_SNAKE_ANGRY): CFLAGS += -fsanitize=address,leak,undefined
$(NAME_SNAKE_ANGRY): LDFLAGS += -lasan
$(NAME_SNAKE_ANGRY): $(ANGRY_SNAKE_OBJ)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/angry/snake/%.o: HEADER
$(BUILD_DIR)/angry/snake/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

ANGRY_SDL_OBJ := $(SDL_SRC:%.cpp=$(BUILD_DIR)/angry/sdl2/%.o)

$(NAME_SDL_ANGRY): CFLAGS += -g3 -D DEBUG_MODE
$(NAME_SDL_ANGRY): CFLAGS += -fsanitize=address,leak,undefined
$(NAME_SDL_ANGRY): LDFLAGS += -lasan -lSDL2
$(NAME_SDL_ANGRY): $(ANGRY_SDL_OBJ)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/angry/sdl2/%.o: HEADER
$(BUILD_DIR)/angry/sdl2/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

ANGRY_NCURSES_OBJ := $(NCURSES_SRC:%.cpp=$(BUILD_DIR)/angry/ncurses/%.o)

$(NAME_NCURSES_ANGRY): CFLAGS += -g3 -D DEBUG_MODE
$(NAME_NCURSES_ANGRY): CFLAGS += -fsanitize=address,leak,undefined
$(NAME_NCURSES_ANGRY): LDFLAGS += -lasan -lncurses
$(NAME_NCURSES_ANGRY): $(ANGRY_NCURSES_OBJ)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/angry/ncurses/%.o: HEADER
$(BUILD_DIR)/angry/ncurses/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

ANGRY_OPENGL_OBJ := $(OPENGL_SRC:%.cpp=$(BUILD_DIR)/angry/opengl/%.o)

$(NAME_OPENGL_ANGRY): CFLAGS += -g3 -D DEBUG_MODE
$(NAME_OPENGL_ANGRY): CFLAGS += -fsanitize=address,leak,undefined
$(NAME_OPENGL_ANGRY): LDFLAGS += -lasan -lGL
$(NAME_OPENGL_ANGRY): $(ANGRY_OPENGL_OBJ)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/angry/opengl/%.o: HEADER
$(BUILD_DIR)/angry/opengl/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

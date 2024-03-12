##
## EPITECH PROJECT, 2024
## arcade
## File description:
## compile.mk
##

BUILD_DIR ?= .build
LIB_DIR ?= lib

OBJ := $(SRC:%.cpp=$(BUILD_DIR)/prod/arcade/%.o)

$(NAME): $(OBJ)
	$Q $(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS) $(LDLIBS)
	$(call LOG,":g$@")

$(BUILD_DIR)/prod/arcade/%.o: HEADER += "release"
$(BUILD_DIR)/prod/arcade/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

OBJ_PACMAN := $(PAC_SRC:%.cpp=$(BUILD_DIR)/prod/pacman/%.o)

$(NAME_PACMAN): $(OBJ_PACMAN)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/prod/pacman/%.o: HEADER
$(BUILD_DIR)/prod/pacman/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

OBJ_SNAKE := $(SNAKE_SRC:%.cpp=$(BUILD_DIR)/prod/snake/%.o)

$(NAME_SNAKE): $(OBJ_SNAKE)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/prod/snake/%.o: HEADER
$(BUILD_DIR)/prod/snake/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

OBJ_SDL := $(SDL_SRC:%.cpp=$(BUILD_DIR)/prod/sdl2/%.o)

$(NAME_SDL): LDFLAGS += -lSDL2
$(NAME_SDL): $(OBJ_SDL)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/prod/sdl2/%.o: HEADER
$(BUILD_DIR)/prod/sdl2/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

OBJ_NCURSES := $(NCURSES_SRC:%.cpp=$(BUILD_DIR)/prod/ncurses/%.o)

$(NAME_NCURSES): LDFLAGS += -lncurses
$(NAME_NCURSES): $(OBJ_NCURSES)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/prod/ncurses/%.o: HEADER
$(BUILD_DIR)/prod/ncurses/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

OBJ_OPENGL := $(OPENGL_SRC:%.cpp=$(BUILD_DIR)/prod/opengl/%.o)

$(NAME_OPENGL): LDFLAGS += -lGL
$(NAME_OPENGL): $(OBJ_OPENGL)
	$Q $(CC) -o $@ $^ $(LIB_CFLAGS) $(LDFLAGS) $(LDLIBS)
	$Q mkdir -p $(LIB_DIR)
	$Q mv $@ $(LIB_DIR)
	$(call LOG,":g$@")

$(BUILD_DIR)/prod/opengl/%.o: HEADER
$(BUILD_DIR)/prod/opengl/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(LIB_CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

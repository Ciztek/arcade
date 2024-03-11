##
## EPITECH PROJECT, 2024
## arcade
## File description:
## unittests.mk
##

%.cpp:

BUILD_DIR ?= .build
LIB_DIR ?= lib

TEST_OBJ := $(TSRC:%.cpp=$(BUILD_DIR)/tests/%.o)
TEST_OBJ += $(filter-out %main.o, $(SRC:%.cpp=$(BUILD_DIR)/tests/%.o))

$(BUILD_DIR)/tests/%.o: HEADER += "tests"
$(BUILD_DIR)/tests/%.o: %.cpp
	$Q mkdir -p $(dir $@)
	$Q $(CC) $(CFLAGS) -c $< -o $@
	$(call LOG, ":c" $(notdir $@))

$(UNIT): CFLAGS += -g3 --coverage -fprofile-arcs
$(UNIT): CFLAGS += -iquote tests/include
$(UNIT): LDLIBS += -lcriterion
$(UNIT): $(TEST_OBJ)
	$Q $(CC) -o $@ $^ $(CFLAGS) $(LDLIBS) $(LDFLAGS)
	$(call LOG,":g$@")

tests_run: $(UNIT)
	@ ./$(UNIT) -OP:F --full-stats

.PHONY: tests_run

cov: tests_run
	$(call CHECK_CMD, gcovr)
	$Q $(call CHECK_CMD, gcovr)
	$Q gcovr . --object-directory .build/tests \
		--gcov-ignore-errors=no_working_dir_found \
		--exclude-unreachable-branches \
		--exclude tests \
		--exclude .direnv
.PHONY: cov

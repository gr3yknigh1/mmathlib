RM        = rm -rf
EXEC      = mathlib
BUILD_DIR = build

.PHONY: main, clean

default: all

all: main

configure:
	[ -d $(BUILD_DIR) ] || mkdir -p $(BUILD_DIR)
	cmake -B $(BUILD_DIR)

main: configure
	cmake --build $(BUILD_DIR)

run: main
	$(BUILD_DIR)/$(EXEC)

clean:
	$(RM) $(BUILD_DIR)


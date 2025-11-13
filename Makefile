CC = gcc
ARGS = -Wall -Wextra -Iinclude

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

SRC = $(wildcard src/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
BIN = $(BIN_DIR)/program

all: $(BIN)

debug: ARGS += -g
debug: $(BIN)

clean:
	rm -rf $(BIN_DIR) $(OBJ_DIR)

run: $(BIN)
	@./bin/program

$(BIN): $(OBJ)
	@mkdir -p $(BIN_DIR)
	$(CC) $(ARGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(ARGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

.PHONY: all debug clean run
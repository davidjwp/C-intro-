CC ?= gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c99



SRC = hello.c
BIN = hello
OBJ = $(SRC:.c=.o)

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) -o $(BIN) $(OBJ)

check:
	./$(BIN)

clean:
	rm -f $(OBJ) $(BIN)

.PHONY: clean all ckeck


CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = 0-print.c
TESTS = tests/0-main.c

all: _printf

_printf:
    $(CC) $(CFLAGS) -o $@ $(SRC) $(TESTS)

clean:
    rm -f _printf

re: clean all

.PHONY: all clean re


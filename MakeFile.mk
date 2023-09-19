CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = 0-print.c
TESTS = tests/0-main.c

all: 0-print

0-print:
    $(CC) $(CFLAGS) -o $@ $(SRC) $(TESTS)

clean:
    rm -f 0-print

re: clean all

.PHONY: all clean re

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Wpedantic -g -std=gnu99

EXECS = main

.PHONY: all clean

all: $(EXECS) 

main: main.c
	$(CC) main.c -o $@

clean: 
	rm -f $(EXECS) 

SHELL := /bin/bash
CC=gcc
CFLAGS = -c -Wall
all : hello
hello : main.o
       $(CC) -o hello main.o
main.o : main.c
       $(CC) $(CFLAGS) main.c
clean:
       rm -f *.o hello


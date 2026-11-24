CC = clang
CFLAGS = $(shell pkg-config --cflags raylib)
LIBS = $(shell pkg-config --libs raylib)

all:
	$(CC) main.c -o calculator $(CFLAGS) $(LIBS)

run: all
	./calculator
CC=gcc
CFLAGS= `sdl2-config --cflags --libs`
DEPS = window.h renderer.h map.h arbitre.h interface.h arbre.h gameIA.h
OBJ = window.c main.c renderer.c map.c arbitre.c interface.c arbre.c gameIA.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) -lm

AlphaDice: $(OBJ)
	gcc -g -std=c99 -o $@ $^ $(CFLAGS)

clean:
	rm -rf AlphaDice

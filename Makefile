obj/main.o: src/main.c
	$(CC) -c src/main.c -o obj/main.o

obj/core.o: src/core.c src/core.h
	$(CC) -c src/core.c -o obj/core.o

main: obj/main.o obj/core.o
	$(CC) obj/main.o obj/core.o -o bin/main

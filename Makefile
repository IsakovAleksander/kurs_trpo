main.o: src/main.c src/core.c src/core.h
	$(CC) -c src/main.c

main: main.o
	$(CC) main.o -o main

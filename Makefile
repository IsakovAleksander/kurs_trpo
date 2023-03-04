all: main

obj/main.o: src/main.c
	$(CC) -c src/main.c -o obj/main.o

obj/core.o: src/core.c src/core.h
	$(CC) -c src/core.c -o obj/core.o

obj/tests/tests.o: tests/tests.c
	$(CC) -c tests/tests.c -o obj/tests/tests.o

tests: obj/tests/tests.o obj/core.o
	$(CC) obj/tests/tests.o obj/core.o -o tests_bin/tests

main: obj/main.o obj/core.o
	$(CC) obj/main.o obj/core.o -o bin/main

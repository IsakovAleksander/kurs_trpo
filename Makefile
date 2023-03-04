obj/main.o: src/main.c
	$(CC) -c src/main.c -o obj/main.o

obj/core.o: src/core.c src/core.h
	$(CC) -c src/core.c -o obj/core.o

obj/tests/tests.o: tests/test.c
	$(CC) -c tests/test.c -o obj/tests/tests.o

obj/tests/tests_core.o: src/core.c
	$(CC) -c src/core.c -o obj/tests/tests_core.o

tests: obj/tests/tests.o obj/tests/tests_core_.o
	$(CC) obj/tests/tests.o obj/tests/tests_core.o -o tests_bin/tests

main: obj/main.o obj/core.o
	$(CC) obj/main.o obj/core.o -o bin/main

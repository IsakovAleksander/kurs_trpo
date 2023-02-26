../obj/tests/tests.o: main.c
	$(CC) -c main.c -o ../obj/tests/tests.o

../obj/tests/core.o: ../src/core.c
	$(CC) -c ../src/core.c -o ../obj/tests/core.o

tests: ../obj/tests/tests.o ../obj/tests/core.o
	$(CC) ../obj/tests/tests.o ../obj/tests/core.o -o ../tests_bin/tests

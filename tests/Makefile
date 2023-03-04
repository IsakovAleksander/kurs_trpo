../obj/tests/tests.o: test.c
	$(CC) -c test.c -o ../obj/tests/tests.o

../obj/tests/tests_core.o: ../src/core.c
	$(CC) -c ../src/core.c -o ../obj/tests/tests_core.o

tests: ../obj/tests/tests.o ../obj/tests/tests_core_.o
	$(CC) ../obj/tests/tests.o ../obj/tests/tests_core.o -o ../tests_bin/tests

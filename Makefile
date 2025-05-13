CC = gcc
CFlags = -Wall -Wextra -Werror
SRC_OBJ = src\*.o src\*.exe
TEST_OBJ = tests\*.o tests\*.exe

main.exe: src\main.o 
	$(CC) $(CFlags) $^ -o src\$@

main.o: src\main.c
	$(CC) $(CFlags) -c $< -o src\$@

test: tests\test_calculations.c tests\unity\src\unity.c
	$(CC) $(CFlags) $^ -o tests\$@

clean:
	del -fr $(SRC_OBJ) $(TEST_OBJ)
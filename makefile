CC=g++

CPPFLAGS=-Wall -Werror -Wextra -c

OBJ=main.o menu.o Checker.o Words.o AllIncludeMode.o RandomMode.o

SRC=./src

BIN=./bin

TEST=./test

GOOGLE_TEST_LIB = gtest

GOOGLE_TEST_INCLUDE = /usr/local/include

TEST_FLAG = -L /usr/local/lib -l $(GOOGLE_TEST_LIB) -l pthread

all : PROG clean

PROG : main Menu Checker Words AllInclude Random Verbs clean

main:
	$(CC) $(CPPFLAGS) $(SRC)/main.cpp 

Menu :
	$(CC) $(CPPFLAGS) $(SRC)/menu.cpp

Checker :
	$(CC) $(CPPFLAGS) $(SRC)/Functions/Checker.cpp

Words :
	$(CC) $(CPPFLAGS) $(SRC)/Functions/Words.cpp

AllInclude :
	$(CC) $(CPPFLAGS) $(SRC)/Mode/AllIncludeMode.cpp

Random :
	$(CC) $(CPPFLAGS) $(SRC)/Mode/RandomMode.cpp

Verbs :
	$(CC) $(OBJ) -o $(BIN)/VerbsChecker.exe

Test : maintest clean

maintest :
	$(CC) $(CPPFLAGS) $(GOOGLE_TEST_INCLUDE) $(TEST)/main.cpp
	$(CC) main.o $(TEST_FLAG) -o test.exe

clean :
	rm -rf *.o

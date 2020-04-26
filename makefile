CC=g++

CPPFLAGS=-Wall -Werror -Wextra -c

OBJ=main.o menu.o Checker.o Words.o AllIncludeMode.o RandomMode.o

SRC=./src

BIN=./bin

TEST=./test

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
	$(CC) $(OBJ) -o $(BIN)/VerbsChecker

Test :
	gcc -Wall -fPIC $(TEST)/main.cpp

clean :
	rm -rf *.o

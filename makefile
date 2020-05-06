CC=g++

CPPFLAGS=-Wall -Werror -Wextra -c

OBJ=main.o menu.o Checker.o Words.o AllIncludeMode.o RandomMode.o Save.o

OBJ_TEST=main.o WordsTestNoCoutChecker.o Save.o

SRC=./src

BIN=./bin

TEST=./test

GOOGLE_TEST_LIB = gtest

TEST_FLAG = -L /usr/local/lib -l $(GOOGLE_TEST_LIB) -l pthread

all : PROG clean

PROG : main Menu Checker Words AllInclude Random Save Verbs clean

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

Save :
	$(CC) $(CPPFLAGS) $(SRC)/Functions/Save.cpp

Verbs :
	$(CC) $(OBJ) -o $(BIN)/VerbsChecker.exe

testall : testM WordsTesting Save testO clean

testM :
	$(CC) $(CPPFLAGS) $(TEST)/main.cpp

WordsTesting : 
	$(CC) $(CPPFLAGS) $(TEST)/WordsTestNoCoutChecker.cpp

testO :
	$(CC) $(OBJ_TEST) $(TEST_FLAG) -o $(TEST)/test.exe

clean :
	rm -rf *.o

.PHONY : testall clean

CC=g++

CPPFLAGS=-Wall -Werror -Wextra -c

OBJ=main.o menu.o Checker.o Words.o AllIncludeMode.o RandomMode.o Save.o Now.o Progress.o Continue.o Check.o

OBJ_TEST=main.o Words.o Save.o AllIncludeMode.o testall.o

SRC=./src

BIN=./bin

TEST=./test

GOOGLE_TEST_LIB = gtest

TEST_FLAG = -L /usr/local/lib -l $(GOOGLE_TEST_LIB) -l pthread

all : PROG clean

PROG : main Menu Checker Words AllInclude Random Save Progress Now Continue Check Verbs clean

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

Progress :
	$(CC) $(CPPFLAGS) $(SRC)/Functions/Progress.cpp

Now :
	$(CC) $(CPPFLAGS) $(SRC)/Functions/Now.cpp

Continue :
	$(CC) $(CPPFLAGS) $(SRC)/Mode/Continue.cpp

Check :
	$(CC) $(CPPFLAGS) $(SRC)/Check.cpp

Verbs :
	$(CC) $(OBJ) -o $(BIN)/VerbsChecker.exe

testall : testM WordsTesting Save AllInclude testT testO clean

testM :
	$(CC) $(CPPFLAGS) $(TEST)/main.cpp

WordsTesting : 
	$(CC) $(CPPFLAGS) $(TEST)/Words.cpp

testT : 
	$(CC) $(CPPFLAGS) $(TEST)/testall.cpp

testO :
	$(CC) $(OBJ_TEST) $(TEST_FLAG) -o $(TEST)/test.exe

clean :
	rm -rf *.o

.PHONY : testall clean

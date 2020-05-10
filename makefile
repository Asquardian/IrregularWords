CC=g++

CPPFLAGS=-Wall -Werror -Wextra -c

OBJ=main.o menu.o Checker.o Words.o AllIncludeMode.o RandomMode.o Save.o Now.o Progress.o Continue.o Check.o

OBJ_TEST=main.o testall.o Words.o Save.o AllIncludeMode.o

SRC=./src

BIN=./bin

TEST=./test

GOOGLE_TEST_LIB = gtest

GOOGLE_TEST_INCLUDE = /usr/local/include

CPPTEST_FLAGS = -c -Wall -I $(GOOGLE_TEST_INCLUDE)

TEST_FLAG = -L /usr/local/lib -l $(GOOGLE_TEST_LIB) -l pthread

all : main PROG Verbs clean

PROG : Menu Checker Words AllInclude Random Save Progress Now Continue Check

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

testall : testM testT  PROG testO clean

testM :
	$(CC) $(CPPTEST_FLAGS) $(TEST)/main.cpp

testT :
	$(CC) $(CPPTEST_FLAGS) $(TEST)/testall.cpp

testO :
	$(CC) $(OBJ_TEST) $(TEST_FLAG) -o $(TEST)/test.exe

clean :
	rm -rf *.o

.PHONY : clean

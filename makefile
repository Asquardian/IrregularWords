CC=g++

CPPFLAGS=-Wall -Werror -Wextra -c

OBJ=$(BUILD)/main.o $(BUILD)/menu.o $(BUILD)/Checker.o $(BUILD)/Words.o $(BUILD)/AllIncludeMode.o $(BUILD)/RandomMode.o $(BUILD)/Save.o $(BUILD)/Now.o $(BUILD)/Progress.o $(BUILD)/Continue.o $(BUILD)/Check.o

OBJ_TEST=$(BUILD)/testall.o

SRC=./src

BIN=./bin

TEST=./test

BUILD=./build

GOOGLE_TEST_LIB = gtest

GOOGLE_TEST_INCLUDE = /usr/local/include

CPPTEST_FLAGS = -c -Wall -I $(GOOGLE_TEST_INCLUDE)

TEST_FLAG = -L /usr/local/lib -l $(GOOGLE_TEST_LIB) -l pthread -o

all : 
	cd $(BIN); ./VerbsChecker.exe

runtest : 
	cd $(BIN); ./test.exe

PROG : Menu Checker Words AllInclude Random Save Progress Now Continue Check

Build : main PROG Verbs clean

main:
	$(CC) $(CPPFLAGS) $(SRC)/main.cpp -o $(BUILD)/main.o

Menu :
	$(CC) $(CPPFLAGS) $(SRC)/menu.cpp -o $(BUILD)/menu.o

Checker :
	$(CC) $(CPPFLAGS) $(SRC)/Functions/Checker.cpp -o $(BUILD)/Checker.o 

Words :
	$(CC) $(CPPFLAGS) $(SRC)/Functions/Words.cpp -o $(BUILD)/Words.o

AllInclude :
	$(CC) $(CPPFLAGS) $(SRC)/Mode/AllIncludeMode.cpp -o $(BUILD)/AllIncludeMode.o

Random :
	$(CC) $(CPPFLAGS) $(SRC)/Mode/RandomMode.cpp -o $(BUILD)/RandomMode.o

Save :
	$(CC) $(CPPFLAGS) $(SRC)/Functions/Save.cpp -o $(BUILD)/Save.o

Progress :
	$(CC) $(CPPFLAGS) $(SRC)/Functions/Progress.cpp -o $(BUILD)/Progress.o

Now :
	$(CC) $(CPPFLAGS) $(SRC)/Functions/Now.cpp -o $(BUILD)/Now.o

Continue :
	$(CC) $(CPPFLAGS) $(SRC)/Mode/Continue.cpp -o $(BUILD)/Continue.o

Check :
	$(CC) $(CPPFLAGS) $(SRC)/Check.cpp -o $(BUILD)/Check.o

Verbs :
	$(CC) $(OBJ) -o $(BIN)/VerbsChecker.exe 

check : PROG testM testT testO clean

testM :
	$(CC) $(CPPTEST_FLAGS) $(TEST)/main.cpp -o $(BUILD)/main.o

testT :
	$(CC) $(CPPTEST_FLAGS) $(TEST)/testall.cpp -o $(BUILD)/testall.o

testO :
	$(CC) $(OBJ_TEST) $(OBJ) $(TEST_FLAG) $(BIN)/test.exe

clean :
	rm -rf $(BUILD)/*.o

unistall:
	rm -rf $(BIN)/VerbsChecker.exe
	rm -rf $(BIN)/test.exe

.PHONY : clean

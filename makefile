all :
	g++ -Wall -Werror -c src/main.cpp
	g++ -Wall -Werror -c src/Functions/Checker.cpp
	g++ -Wall -Werror -c src/Functions/Words.cpp
	g++ -Wall -Werror -c src/Mode/AllIncludeMode.cpp
	g++ main.o Checker.o Words.o AllIncludeMode.o -o VerbsChecker
	rm -rf main.o Checker.o Words.o AllIncludeMode.o

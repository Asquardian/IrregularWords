all :
	g++ -Wall -Werror -c src/main.cpp
	g++ -Wall -Werror -c src/menu.cpp
	g++ -Wall -Werror -c src/Functions/Checker.cpp
	g++ -Wall -Werror -c src/Functions/Words.cpp
	g++ -Wall -Werror -c src/Mode/AllIncludeMode.cpp
	g++ -Wall -Werror -c src/Mode/RandomMode.cpp
	g++ main.o menu.o Checker.o Words.o AllIncludeMode.o RandomMode.o -o VerbsChecker
	rm -rf main.o menu.o Checker.o Words.o AllIncludeMode.o RandomMode.o

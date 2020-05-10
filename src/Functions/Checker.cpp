#include "../functions.h"
#include <fstream>

using namespace std;

void Checker(string &Output)
{
    string Input;
    int j = 0;
    ifstream In;
    ofstream Out;
    cout << "Enter a word: ";
    cin >> Input;
    if (Input == "Exit" || Input == "exit") {
        exit(0);
    }
    if (Input == "ExitMenu" || Input == "exitmenu")
        Menu();
    if (Input == Output) {
        cout << "Correct \n";
        In.open("stat.forge");
        In >> j;
        j++;
        Out.open("stat.forge");
        Out << j;
    } else
        cout << "You made a mistake\n";
}

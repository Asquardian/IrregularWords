#include "../functions.h"
#include <fstream>

using namespace std;

void Checker(string &OUTPUT)
{
    string INPUT;
    int j = 0;
    ifstream IN;
    ofstream OUT;
    cout << "Enter a word: ";
    cin >> INPUT;
    if (INPUT == "Exit" || INPUT == "exit") {
        exit(0);
    }
    if (INPUT == "ExitMenu" || INPUT == "exitmenu")
        Menu();
    if (INPUT == OUTPUT) {
        cout << "Correct \n";
        IN.open("stat.forge");
        IN >> j;
        j++;
        OUT.open("stat.forge");
        OUT << j;
    } else
        cout << "You made a mistake\n";
}

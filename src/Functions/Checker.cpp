#include "../functions.h"
void Checker(string OUTPUT)
{
    string INPUT;
    int j = 0;
    ifstream IN;
    ofstream OUT;
    cout << "Enter a word: ";
    cin >> INPUT;
    if (INPUT == "Exit" || INPUT == "exit") {
        OUT.open("stat.forge");
        exit(0);
    }
    if (INPUT == "ExitMenu" || INPUT == "exitmenu")
        Menu();
    if (INPUT == OUTPUT) {
        cout << "Correct " << endl;
        IN.open("stat.forge");
        IN >> j;
        j++;
        OUT.open("stat.forge");
        OUT << j;
    } else
        cout << "You made a mistake" << endl;
}

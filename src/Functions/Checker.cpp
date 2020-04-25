#include "../functions.h"
void Checker(string OUTPUT)
{
    string INPUT;
    cout << "Enter a word: ";
    cin >> INPUT;
    if (INPUT == "Exit" || INPUT == "exit")
        exit(0);
    if (INPUT == "ExitMenu" || INPUT == "exitmenu")
        Menu();
    if (INPUT == OUTPUT) {
        cout << "Correct " << endl;
    } else
        cout << "You made a mistake" << endl;
}

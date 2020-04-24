#include "functions.h"

int Menu()
{
    int n = 0;
    while (n == 0) {
        system("figlet VerbsChecker");
        cout << "                  Enter Mode: All or Random" << endl;
        string Choose;
        cin >> Choose;
        if (Choose == "All" || Choose == "all") {
            Mode1();
        }
        if (Choose == "Random" || Choose == "random") {
            Mode2();
        }
        if (Choose == "Exit" || Choose == "exit")
            exit(0);
        else
            cout << "Error";
    }
    return 0;
}

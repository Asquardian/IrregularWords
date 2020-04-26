#include "functions.h"

int Menu()
{
    int n = 0, j;
    char a;
    system("clear");
    cout << "        Enter 'Exit' or 'exit' to quit" << endl;
    cout << "  Enter 'ExitMenu' or 'exitmenu' to quit in menu" << endl;
    while (n == 0) {
        system("figlet VerbsChecker");
        cout << "                  Enter Mode: All or Random" << endl;
        string Choose;
        cin >> Choose;
        switch (Choose) {
        case "All" || "all":
            Mode1();
            break;
        case "Random" || "random":
            Mode2();
            break;
        case "Save" || "save":
            cin >> a;
            ifstream outs;
            ofstream s;
            cout << "Saving...";
            outs.open("stat.forge");
            outs >> j;
            s.open("score.forge");
            s << a << ": " << j << "\n";
            cout << "Saving complete";
            break;
        case "Exit" || "Exit":
            ofstream del;
            del.open(stat.forge);
            del << 0;
            exit(0);
        default:
            cout << "Error";
            system("clear");
        }
        return 0;
    }

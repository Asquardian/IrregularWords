#include "functions.h"

int Menu()
{
    int n = 0;
    string a;
    system("clear");
    cout << "        Enter 'Exit' or 'exit' to quit" << endl;
    cout << "  Enter 'ExitMenu' or 'exitmenu' to quit in menu" << endl;
    cout << "  Enter 'Save' or 'save' to save your progress" << endl;
    cout << "  Enter 'Progress' or 'progress' to see your progress" << endl;
    cout << "Enter 'Now' or 'now' to see your last score" << endl;
    system("figlet VerbsChecker");
    cout << "                  Enter Mode: All or Random" << endl;
    while (n == 0) {
        string Choose;
        cin >> Choose;
        if (Choose == "All" || Choose == "all") {
            Mode1();
        }
        if (Choose == "Random" || Choose == "random") {
            Mode2();
        }
        if (Choose == "Save" || Choose == "save") {
            int Num;
            ifstream allnameout;
            allnameout.open("NumName.forge");
            allnameout >> Num;
            cout << "Spaces will not count \nEnter your name: ";
            string Name;
            cin >> Name;
            Save(Num, Name);
            allnameout.open("NumName.forge");
        }
        if (Choose == "Progress" || Choose == "progress") {
            const int len = 50, all = 2;
            const char end = '\n';
            char name[len][all];
            ifstream load("score.forge");
            for (int r = 0; r != all; r++) {
                load.getline(name[r], len - 1, end);
                cout << name[r] << endl;
            }
        }
        if (Choose == "Now" || Choose == "now") {
            ifstream stat;
            string curstat;
            stat.open("stat.forge");
            stat >> a;
            cout << a << endl;
            stat.close();
        }
        if (Choose == "Tab" || Choose == "tab") {
            Tab();
        }
        if (Choose == "Exit" || Choose == "exit") {
            exit(0);
        }
        if (Choose != "Save" && Choose != "save" && Choose != "Progress"
            && Choose != "progress" && Choose != "Now" && Choose != "now"
            && Choose != "Tab" && Choose != "tab") {
            system("clear");
            system("figlet VerbsChecker");
            cout << "                  Enter Mode: All or Random" << endl;
        }
    }

    return 0;
}

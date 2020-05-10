#include "functions.h"

using namespace std;

int Menu()
{
    int n = 0;
    cout << "\n\n\n\n        Enter 'Exit' or 'exit' to quit" << endl;
    cout << "  Enter 'ExitMenu' or 'exitmenu' to quit in menu" << endl;
    cout << "  Enter 'Save' or 'save' to save your progress" << endl;
    cout << "  Enter 'Progress' or 'progress' to see your progress" << endl;
    cout << "  Enter 'Now' or 'now' to see your last score" << endl;
    system("figlet VerbsChecker");
    cout << "                                             exper v0.1" << endl;
    cout << "                  Enter Mode: All or Random or Continue" << endl;
    while (n == 0) {
        string Choose;
        cin >> Choose;
        if (Choose == "All" || Choose == "all") {
            ofstream OUT("stat.forge");
            OUT << 0;
            Mode1(3);
        }
        if (Choose == "Continue" || Choose == "continue") {
            Continue();
        }
        if (Choose == "Random" || Choose == "random") {
            ofstream OUT("stat.forge");
            OUT << 0;
            Mode2();
        }
        if (Choose == "Save" || Choose == "save") {
            int Num;
            ifstream allnameout;
            allnameout.open("NumName.forge");
            allnameout >> Num;
            cout << "Spaces will not count \nEnter your name: ";
            char Name[46];
            cin >> Name;
            while (strlen(Name) > 46) {
                cout << "Number of characters is more than 46";
                cin >> Name;
            }
            Save(Num, Name);
            allnameout.open("NumName.forge");
        }
        if (Choose == "Progress" || Choose == "progress") {
            Progress();
        }
        if (Choose == "Now" || Choose == "now") {
            Now();
        }
        if (Choose == "Exit" || Choose == "exit") {
            exit(0);
        }
        if (Choose != "Save" && Choose != "save" && Choose != "Progress"
            && Choose != "progress" && Choose != "Now" && Choose != "now"
            && Choose != "Tab" && Choose != "tab") {
            cout << "\n\n\n\n";
            system("figlet VerbsChecker");
            cout << "                  Enter Mode: All or Random" << endl;
        }
    }
    return 0;
}

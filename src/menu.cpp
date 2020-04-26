#include "functions.h"

int Menu()
{
    int n = 0, j;
    string a;
    system("clear");
    cout << "        Enter 'Exit' or 'exit' to quit" << endl;
    cout << "  Enter 'ExitMenu' or 'exitmenu' to quit in menu" << endl;
    cout << "  Enter 'Save' or 'save' to save your progress" << endl;
    cout << "  Enter 'Progress' or 'progress' to see your progress" << endl;
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
        if (Choose == "Save" || Choose == "save") {
            cout << "Do you want to rewrite score? y/n";
            string answ;
            cin >> answ;
            if (answ == "y") {
                cout << "Enter your name: ";
                cin >> a;
                cout << a;
                ifstream outs, pck;
                ofstream save;
                cout << " Saving... ";
                outs.open("stat.forge");
                outs >> j;
                outs.close();
                save.open("score.forge");
                save << a << ": " << j;
                save.close();
                cout << "Saving complete";
            }
        }
        if (Choose == "Exit" || Choose == "exit") {
            exit(0);
        }
        if (Choose != "Save" && Choose != "save" && Choose != "Progress" && Choose != "progress")
            cout << " Error";
        system("clear");
    }
    return 0;
}

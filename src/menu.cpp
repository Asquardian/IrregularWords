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
            cout << "Spaces will not count \nEnter your name: ";
            cin >> a;
            cout << a;
            ifstream outs, load, allnameout;
            ofstream save, allnamein;
            string PerRes;
            allnameout.open("NumName.forge");
            allnameout >> Num;
            if (Num < 2.5) {
                allnamein.open("NumName.forge");
                allnameout.close();
                cout << " Saving... " << endl;
                outs.open("stat.forge");
                allnameout.open("NumName.forge");
                outs >> j;
                outs.close();
                load.open("score.forge");
                load >> PerRes;
                save.open("score.forge");
                if (Num == 1) {
                    save << a << ":" << j;
                }
                if (Num == 2) {
                    save << PerRes << "\n" << a << ":" << j;
                }
                Num++;
                allnamein << Num;
                allnamein.close();
                save.close();
                cout << "Saving complete" << endl;
            } else {
                cout << "\nNot enough space for save" << endl;
                cout << "Clear all data y/n" << endl;
                string rewrite;
                cin >> rewrite;
                if (rewrite == "y") {
                    ofstream rest, clear;
                    clear.open("score.forge");
                    rest.open("NumName.forge");
                    rest << 1;
                    clear << "No Data";
                    clear.close();
                    rest.close();
                    cout << "Cleared\nSave again" << endl;
                } else
                    cout << "Cancel" << endl;
            }
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
        if (Choose == "Exit" || Choose == "exit") {
            exit(0);
        }
        if (Choose != "Save" && Choose != "save" && Choose != "Progress"
            && Choose != "progress" && Choose != "Now" && Choose != "now") {
            system("clear");
            system("figlet VerbsChecker");
            cout << "                  Enter Mode: All or Random" << endl;
        }
    }

    return 0;
}

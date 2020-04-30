#include "functions.h"

int Menu()
{
    int n = 0, j, Num;
    string a;
    system("clear");
    cout << "        Enter 'Exit' or 'exit' to quit" << endl;
    cout << "  Enter 'ExitMenu' or 'exitmenu' to quit in menu" << endl;
    cout << "  Enter 'Save' or 'save' to save your progress" << endl;
    cout << "  Enter 'Progress' or 'progress' to see your progress" << endl;
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
            cout << "Do you want to rewrite score? y/n" << endl;
            string answ;
            cin >> answ;
            if (answ == "y") {
                cout << "Enter your name: ";
                cin >> a;
                cout << a;
                ifstream outs, load, allnameout;
                ofstream save, allnamein;
                string PerRes;
                allnameout >> Num;
                if (Num < 11) {
                    Num++;
                    allnamein.open("NumName.forge");
                    allnamein << Num;
                    allnamein.close();
                    allnameout.close();
                    cout << " Saving... " << endl;
                    outs.open("stat.forge");
                    allnameout.open("NumName.forge");
                    outs >> j;
                    outs.close();
                    load.open("score.forge");
                    load >> PerRes;
                    save.open("score.forge");
                    save << PerRes << "\n" << a << ":" << j;
                    save.close();
                    cout << "Saving complete" << endl;
                } else {
                    cout << "Not enough space for save" << endl;
                    cout << "Clear all data y/n" << endl;
                    string rewrite;
                    cin >> rewrite;
                    if (rewrite == "y") {
                        ofstream rest, clear;
                        clear.open("score.forge");
                        rest.open("NumName.forge");
                        rest << 1;
                        clear << 0;
                        clear.close();
                        rest.close();
                    }
                }
            }
        }
        if (Choose == "Progress" || Choose == "progress") {
            const int len = 50, all = 10;
            const char end = '\n';
            char name[len][all];
            ifstream load("score.forge");
            for (int r = 0; r != all; r++) {
                load.getline(name[r], len - 1, end);
                cout << name[r] << endl;
            }
        }
        if (Choose == "Exit" || Choose == "exit") {
            exit(0);
        }
        if (Choose != "Save" && Choose != "save" && Choose != "Progress"
            && Choose != "progress") {
            system("clear");
            system("figlet VerbsChecker");
            cout << "                  Enter Mode: All or Random" << endl;
        }
    }

    return 0;
}

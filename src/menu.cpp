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
            cout << "Do you want to rewrite score? y/n" << endl;
            string answ;
            cin >> answ;
            if (answ == "y") {
                cout << "Spaces will not count \nEnter your name: ";
                cin >> a;
                cout << a;
                ifstream outs;
                ofstream save;
                cout << " Saving... " << endl;
                outs.open("stat.forge");
                outs >> j;
                outs.close();
                save.open("score.forge");
                save << a << ":" << j;
                save.close();
                cout << "Saving complete" << endl;
            }
        }
        if (Choose == "Progress" || Choose == "progress") {
            ifstream check;
            string a;
            check.open("score.forge");
            check >> a;
            cout << a << endl;
            check.close();
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
            && Choose != "progress" && Choose !="Now" && Choose != "now") {
            system("clear");
            system("figlet VerbsChecker");
            cout << "                  Enter Mode: All or Random" << endl;
        }
    }
    return 0;
}

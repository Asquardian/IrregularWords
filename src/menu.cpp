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
        if (Choose == "All" || Choose == "all") {
            Mode1();
        }
        if (Choose == "Random" || Choose == "random") {
            Mode2();
        }
	if (Choose == "Save" || Choose == "save") {
	    cout << "Enter your name";
            cin >> a;
	    ifstream outs;
            ofstream s;
            string a;
	    cout << "Saving...";
	    outs.open("stat.forge");
	    outs >> j;
	    s.open("score.forge");
            s << a << ": " <<  j << "\n";
	    cout << "Saving complete";
	}
        if (Choose == "Exit" || Choose == "exit")
            exit(0);
        else
            cout << "Error";
        system("clear");
    }
    return 0;
}

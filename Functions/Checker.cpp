#include "../functions.h"
int Checker(string OUTPUT)
{
	string INPUT;
        cout << "Enter a word: " << endl;
        cin >> INPUT;
        if (INPUT == "Exit")
 	    exit(0);
        if (INPUT == OUTPUT) {
            cout << "Correct " << endl;
        } else
            cout << "You made a mistake";
	return 0;
}


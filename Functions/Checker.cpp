#include "../functions.h"
int Checker(char OUTPUT)
{
	char INPUT;
        cout << "Enter a word: ";
        cin >> INPUT;
        if (INPUT == 'Exit' || INPUT == 'exit')
 	    exit(0);
        if (INPUT == OUTPUT) {
            cout << "Correct " << endl;
        } else
            cout << "You made a mistake" << endl;
	return 0;
}



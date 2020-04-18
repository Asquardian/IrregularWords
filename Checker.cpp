#include "functions.h"
void Checker(string word)
{
	string str;
        cout << "Enter a word: ";
        cin >> str;
        if (str == word) {
            cout << "Correct " << endl;
        } else
            cout << "You made a mistake" << endl;
}


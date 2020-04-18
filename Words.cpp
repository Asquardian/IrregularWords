#include "functions.h"
string Words(int i)
{
    string word, str;
    switch (i) {
    case 0:
        cout << "Past Simple V2" << endl << "Arise" << endl;
        word = "Arose";
        cout << "Enter a word: ";
        cin >> str;
        if (str == word) {
            cout << "Correct " << endl;
        } else
            cout << "You made a mistake";
    }
}


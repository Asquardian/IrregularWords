#include "functions.h"
void Words()
{
    int i;
    cout << "Enter word from a capital letter";
    for (i = 0; i < 100; i++) {
        switch (i) {
        case 0:
            cout << "Past Simple V2" << endl << "Arise" << endl;
            word = "Arose";
            Check();
        }
    }
}

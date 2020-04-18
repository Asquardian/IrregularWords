#include "functions.h"
#include <cstring>
#include <iostream>
using namespace std;
void Words()
{
    string word;
    int i;
    cout << "Enter word from a capital letter";
    for (i = 0; i < 100; i++) {
        switch (i) {
        case 0:
            cout << "Past Simple V2" << endl << "Arise";
            word = "Arose";
            Check();
        }
    }
}

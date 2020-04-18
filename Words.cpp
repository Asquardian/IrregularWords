#include "functions.h"
string Words(int i)
{
    string word;
    switch (i) {
    case 0:
        cout << "Simple Past (V2) of Arise" << endl;
        Checker("Arose");
    case 1:
        cout << "Past Particle (V3) of Arise" << endl;
        Checker("Arisen");
    case 2:
        cout << "Simple Past (V2) of Awake without -ed" << endl;
        Checker("Awoke");
    case 3:
        cout << "Past Particle (V3) of Awake without -ed" << endl;
        Checker("Awoken");
    }

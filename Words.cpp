#include "functions.h"
string Words(int i)
{
    string word;
    switch (i) {
    case 0:
        cout << "Simple Past (V2) of Arise" << endl;
        Checker("Arose");
	break;
    case 1:
        cout << "Past Particle (V3) of Arise" << endl;
        Checker("Arisen");
	break;
    case 2:
        cout << "Simple Past (V2) of Awake without -ed" << endl;
        Checker("Awoke");
	break;
    case 3:
        cout << "Past Particle (V3) of Awake without -ed" << endl;
        Checker("Awoken");
	break;
    case 4:
        cout << "Simple Past (V2) of Be in singular" << endl;
        Checker("Was");
	break;
    case 5:
        cout << "Simple Past (V2) of Be in plural" << endl;
        Checker("Were");
	break;
    case 6:
        cout << "Past Particle (V3) of Be" << endl;
        Checker("Been");
	break;
    }

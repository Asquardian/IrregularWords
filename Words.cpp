#include "functions.h"
void Words(int i)
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
    case 7:
        cout << "Simple Past (V2) of Become" << endl;
        Checker("Became");
        break;
    case 8:
        cout << "Past Particle (V3) of Become" << endl;
        Checker("Become");
        break;
    case 9:
    	cout << "Simple Past (V2) of Begin" << endl;
        Checker("Began");
        break;
    case 10:
    	cout << "Past Particle (V3) of Begin" << endl;
        Checker("Begun");
        break;
    case 11:
    	cout << "Simple Past (V2) of Bring" << endl;
        Checker("Brought");
        break;
    case 12:
    	cout << "Past Particle (V3) of Bring" << endl;
        Checker("Brought");
        break;
    case 13:
    	cout << "Simple Past (V2) of Build" << endl;
        Checker("Built");
        break;
    case 14:
    	cout << "Past Particle (V3) of Build" << endl;
        Checker("Built");
        break;
    default:
        cout << "Complete!";
    }
}

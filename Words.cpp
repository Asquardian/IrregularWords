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
    case 15:
    	cout << "Simple Past (V2) of Buy" << endl;
        Checker("Bought");
        break;
    case 16:
    	cout << "Past Particle (V3) of Buy" << endl;
        Checker("Bought");
        break;
    case 17:
    	cout << "Simple Past (V2) of Can" << endl;
        Checker("Could");
        break;
    case 18:
    	cout << "Past Particle (V3) of Can" << endl;
        Checker("Could");
        break;
    case 19:
    	cout << "Simple Past (V2) of Catch" << endl;
        Checker("Caught");
        break;
    case 20:
    	cout << "Past Particle (V3) of Catch" << endl;
        Checker("Caught");
        break;
    case 21:
    	cout << "Simple Past (V2) of Choose" << endl;
        Checker("Chose");
        break;
    case 22:
    	cout << "Past Particle (V3) of Choose" << endl;
        Checker("Chosen");
        break;
    case 23:
    	cout << "Simple Past (V2) of Come" << endl;
        Checker("Came");
        break;
    case 24:
    	cout << "Past Particle (V3) of Come" << endl;
        Checker("Come");
        break;
    case 25:
    	cout << "Simple Past (V2) of Cost" << endl;
        Checker("Cost");
        break;
    case 26:
    	cout << "Past Particle (V3) of Cost" << endl;
        Checker("Cost");
        break;
    case 27:
    	cout << "Simple Past (V2) of Cut" << endl;
        Checker("Cut");
        break;
    case 28:
    	cout << "Past Particle (V3) of Cut" << endl;
        Checker("Cut");
        break;
    case 29:
    	cout << "Simple Past (V2) of Do" << endl;
        Checker("Did");
        break;
    case 30:
    	cout << "Past Particle (V3) of Do" << endl;
        Checker("Done");
        break;
    case 31:
    	cout << "Simple Past (V2) of Draw" << endl;
        Checker("Drew");
        break;
    case 32:
    	cout << "Past Particle (V3) of Draw" << endl;
        Checker("Drawn");
        break;
    case 33:
    	cout << "Simple Past (V2) of Dream without -ed" << endl;
        Checker("Dreamt");
        break;
    case 34:
    	cout << "Past Particle (V3) of Draw" << endl;
        Checker("Dreamt");
        break;
    case 35:
    	cout << "Simple Past (V2) of Drink" << endl;
        Checker("Drank");
        break;
    case 36:
    	cout << "Past Particle (V3) of Drink" << endl;
        Checker("Drunk");
        break;
    case 37:
    	cout << "Simple Past (V2) of Drive" << endl;
        Checker("Drove");
        break;
    case 38:
    	cout << "Past Particle (V3) of Drive" << endl;
        Checker("Driven");
        break;
    case 39:
    	cout << "Simple Past (V2) of Eat" << endl;
        Checker("Ate");
        break;
    case 40:
    	cout << "Past Particle (V3) of Eat" << endl;
        Checker("Eaten");
    case 41:
    	cout << "Simple Past (V2) of Fall" << endl;
        Checker("Fell");
        break;
    case 42:
    	cout << "Past Particle (V3) of Fall" << endl;
        Checker("Fallen");
        break;
    case 43:
    	cout << "Simple Past (V2) of Feed" << endl;
        Checker("Fed");
        break;
    case 44:
    	cout << "Past Particle (V3) of Feed" << endl;
        Checker("Fed");
        break;
    case 45:
    	cout << "Simple Past (V2) of Fight" << endl;
        Checker("Fought");
        break;
    case 46:
    	cout << "Past Particle (V3) of Fight" << endl;
        Checker("Fought");
        break;
    case 47:
    	cout << "Simple Past (V2) of Find" << endl;
        Checker("Found");
        break;
    case 48:
    	cout << "Past Particle (V3) of Find" << endl;
        Checker("Found");
        break;
    case 49:
    	cout << "Simple Past (V2) of Fight" << endl;
        Checker("Fought");
        break;
    case 50:
    	cout << "Past Particle (V3) of Fight" << endl;
        Checker("Fought");
        break;
    default:
        cout << "Complete!";
    }
}

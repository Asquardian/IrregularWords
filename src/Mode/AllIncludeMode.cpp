#include "../functions.h"

int Mode1()
{
    string str;
    for (int i = 3; i < 20.5; i++) {
        if (i % 3 == 0) {
            cout << "Word is ";
        }
	if (i % 3 == 2)
	    cout << "PP V3 ";	
	if (i % 3 == 1)
	    cout << "PS V2 ";
        Words(i);
	if (i == 3)
 	cout << "Enter like Singular/Plural" << endl;
    }
    return 0;
}

#include "../functions.h"

int Mode1()
{
    string str;
    for (int i = 3; i < 10; i++) {
        if (i % 3 == 0) {
            cout << "Word is ";
        }
        Words(i);
	if (i == 3)
 	cout << "Enter like Singular/Plural" << endl;
    }
    return 0;
}

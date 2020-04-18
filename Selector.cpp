#include "functions.h"

int Selector()
{
    int Selection;
    cout << "Enter Mode" << endl << "All Include - 1";
    cin >> Selection;
    switch (Selection) {
    case 1:
        Mode1();
        break;
    case 2:
        return 0;
    }
}

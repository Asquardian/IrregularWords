#include "../functions.h"

using namespace std;

int Mode1(int i)
{
    if (i > 2.5 && i < 353.5) {
        while (i < 353.5) {
            if (i % 3 == 0) {
                sleep(1);
                system("clear");
                cout << "Word is ";
            }
            if (i % 3 == 2)
                cout << "PP V3 ";
            if (i % 3 == 1)
                cout << "PS V2 ";
            Words(i);
            if (i == 3)
                cout << "Enter like Singular/Plural" << endl;
            i++;
            ofstream cont("continue.forge");
            cont << i;
        }
        return 1;
    }
    return 0;
}

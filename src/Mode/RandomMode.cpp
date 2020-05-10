#include "../functions.h"

using namespace std;

int Mode2()
{
    int i, z = 0, n = 0;
    ofstream OUT("stat.forge");
    OUT << 0;
    while (n < 12.5) {
        i = rand() % 351;
        while (i % 3 != 0) {
            i++;
        }
        while (z < 3) {
            if (i % 3 == 0) {
                cout << "\n\n\n\n";
                cout << "Word is ";
            }
            Words(i);
            i++;
            z++;
        }
        n++;
        z = 0;
    }
    return 0;
}

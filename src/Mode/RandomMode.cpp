#include "../functions.h"
#include <fstream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int Random()
{
    int i, z = 0, n = 0;
    ofstream Out("stat.forge");
    Out << 0;
    while (n < 12.5) {    // Cycle time
        i = rand() % 351; // 353 (all words) - 2 (Forms)
        while (i % 3 != 0) {
            i++;
        }
        while (z < 3) { // Begin of words
            if (i % 3 == 0) {
                sleep(1);
                system("clear");
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

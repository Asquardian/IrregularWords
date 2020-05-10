#include "../functions.h"
#include <fstream>

using namespace std;

void Progress()
{
    const int len = 50, all = 2;
    const char end = '\n';
    char name[len][all];
    ifstream load("score.forge");
    for (int r = 0; r != all; r++) {
        load.getline(name[r], len - 1, end);
        cout << name[r] << endl;
    }
}

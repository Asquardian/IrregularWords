#include "../functions.h"

void Continue()
{
    ifstream cont("continue.forge");
    int i;
    cont >> i;
    while (i % 3 != 0)
        i--;
    cont.close();
    Mode1(i);
}
#include "../functions.h"

void Now()
{
    string a;
    ifstream stat;
    string curstat;
    stat.open("stat.forge");
    stat >> a;
    cout << a << endl;
    stat.close();
}

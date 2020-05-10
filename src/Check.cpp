#include "functions.h"
#include <fstream>

using namespace std;

void Check()
{
    ifstream Num, Cont, Irregular, Score, Stat;
    Num.open("NumName.forge");
    Cont.open("continue.forge");
    Irregular.open("irregular.forge");
    Score.open("score.forge");
    Stat.open("stat.forge");
    if (!(Num.is_open())) {
        cout << "Error: NumName.forge not found \n";
        exit(0);
    }
    if (!(Cont.is_open())) {
        cout << "Error: continue.forge not found  \n";
        exit(0);
    }
    if (!(Irregular.is_open())) {
        cout << "Error: irregular.forge not found  \n";
        exit(0);
    }
    if (!(Score.is_open())) {
        cout << "Error: score.forge not found  \n";
        exit(0);
    }
    if (!(Stat.is_open())) {
        cout << "Error: stat.forge not found  \n";
        exit(0);
    }
}

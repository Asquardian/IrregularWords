#include "functions.h"

void Check()
{
    ifstream Num, cont, irregular, score, stat;
    Num.open("NumName.forge");
    cont.open("continue.forge");
    irregular.open("irregular.forge");
    score.open("score.forge");
    stat.open("stat.forge");
    if (!(Num.is_open())) {
        cout << "Error: NumName.forge not found \n";
        exit(0);
    }
    if (!(cont.is_open())) {
        cout << "Error: continue.forge not found  \n";
        exit(0);
    }
    if (!(irregular.is_open())) {
        cout << "Error: irregular.forge not found  \n";
        exit(0);
    }
    if (!(score.is_open())) {
        cout << "Error: score.forge not found  \n";
        exit(0);
    }
    if (!(stat.is_open())) {
        cout << "Error: stat.forge not found  \n";
        exit(0);
    }
}

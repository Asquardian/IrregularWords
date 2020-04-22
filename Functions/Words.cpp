#include "../functions.h"
void Words(int Form)
{
    const char *word[100];
    word[0]="Be";
    word[1]="Was/Were";
    word[2]="Been";
    word[3]="Test";
    if(Form%3 == 0) {
    cout << "Ps and PP of " << word[Form] << endl;
	}
    else {
    string OUTPUT = word[Form];
    Checker(OUTPUT);
	}
}

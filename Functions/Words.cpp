#include "../functions.h"
void Words(int Form)
{
    const char *word[100];
    word[0]="Be";
    word[1]="Was/Were";
    word[2]="Been";
    word[3]="Had";
    word[4]="Has";
    if(Form%3 == 0) {
    cout << word[Form] << endl;
	}
    else {
    string OUTPUT = word[Form];
    Checker(OUTPUT);
	}
}

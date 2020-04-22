#include "../functions.h"
void Words(int Word, int Form)
{
    const char *word[Word][Form];
    word[0][0]="Be";
    word[0][1]="Was";
    if(Form%2 == 0) {
    cout << word[Word][Form] << endl;
	}
    if(Form%2 == 1) {
    string OUTPUT = word[Word][Form];
    Checker(OUTPUT);
	}
}


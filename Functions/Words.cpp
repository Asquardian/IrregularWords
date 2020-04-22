#include "../functions.h"
void Words(int Form)
{
    const char *word[100];
    word[0]="Be";
    word[1]="Was";
    word[2]="Were";
    if(Form%2 == 0) {
    cout << word[Form] << endl;
	}
    if(Form%2 == 1) {
    string OUTPUT = word[Form];
    Checker(OUTPUT);
	}
}

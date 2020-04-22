#include "../functions.h"
void Words(int Form)
{
    const char *word[Form];
    word[0]="Be";
    word[1]="Was";
    word[2]="Were";
    word[3]="Test";
    if(Form%2 == 0) {
    cout << word[Form] << endl;
	}
    else {
    string OUTPUT = word[Form];
    Checker(OUTPUT); 
	}
}

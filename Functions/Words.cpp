#include "../functions.h"
void Words(int Form)
{
    const int len=6, all=3;
    const char end='\n';
    char word[len][all];
    ifstream fs("irregular.txt", ios::in | ios::binary);
    /*word[0]="Be";
    word[1]="Was/Were";
    word[2]="Been";*/
    for (int r=0; r<len; r++) {
		fs.getline(word[r], len-1,end); 	
	}
    if(Form%3 == 0) {
    cout << word[len][Form] << endl;
	}
    else {
    char OUTPUT = word[len][Form];
    Checker(OUTPUT);
	}
}

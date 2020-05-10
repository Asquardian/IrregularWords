#include "../functions.h"
string Words(int Form)
{
    const int len = 370, all = 1;
    const char end = '\n';
    char word[len][all];
    ifstream file("irregular.forge", ifstream::binary);
    for (int r = 0; r != Form; r++) {
        file.getline(word[Form], len - 1, end);
    }
    if (Form % 3 == 0) {
        cout << word[Form] << endl;
        return "0";
    } else {
        string OUTPUT = word[Form];
        //Checker(OUTPUT);
        return OUTPUT;
    }
}

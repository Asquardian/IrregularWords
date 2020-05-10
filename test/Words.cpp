#include "../src/functions.h"
std::string Words(int Form)
{
    const int len = 370, all = 1;
    const char end = '\n';
    char word[len][all];
    ifstream file("irregular.forge", ifstream::binary);
    for (int r = 0; r != Form; r++) {
        file.getline(word[Form], len - 1, end);
    }
    if (Form % 3 == 0) {
        return "0";
    } else {
        std::string OUTPUT = word[Form];
        return OUTPUT;
    }
}

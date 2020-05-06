#include "../functions.h"

int Tab()
{
    const int l = 370, a = 2;
    const char end = '\n';
    char arr[l][a];
    ifstream file("irregular.forge", ifstream::binary);
    for (int r = 0; r != 365; r++) {
        file.getline(arr[r], l - 1, end);
	if (r % 3 == 0 && r >2)
        cout << arr[r] << "||";
	if (r % 3 == 1 && r >2)
        printf("%4s",arr[r]);
	if (r % 3 == 2 && r >2)
        cout << arr[r] << "|| \n";
    }
    return 0;
}

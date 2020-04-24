#include "functions.h"

int main()
{
    int n = 0;
    while (n == 0) {
        system("figlet VerbsChecker");
        cout << "                  Enter Mode: All or Random" << endl;
        string Choose;
        cin >> Choose;
        if (Choose == "All" || Choose == "all") {
            Mode1();
        }
        if (Choose == "Random" || Choose == "random") {
            Mode2();
        } else
            cout << "Error";
    }
    return 0;
}

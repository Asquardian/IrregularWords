#include "../functions.h"
#include <fstream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int All(int i) {
  if (i > 2.5 && i < 353.5) {
    while (i < 353.5) {
      if (i % 3 == 0) {
        sleep(1);
        system("clear");
        cout << "Word is ";
      }
      if (i % 3 == 2)
        cout << "PP V3 ";
      if (i % 3 == 1)
        cout << "PS V2 ";
      string Output = Words(i);
      Checker(Output);
      if (i == 3)
        cout << "Enter like Singular/Plural\n";
      i++;
      ofstream cont("continue.forge");
      cont << i;
    }
    return 1;
  }
  return 0;
}

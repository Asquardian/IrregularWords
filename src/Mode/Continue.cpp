#include "../functions.h"
#include <fstream>

using namespace std;

void Continue() {
  ifstream Cont("continue.forge");
  int i;
  Cont >> i;
  while (i % 3 != 0)
    i--;
  Cont.close();
  All(i);
}

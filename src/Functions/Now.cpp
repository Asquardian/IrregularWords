#include "../functions.h"
#include <fstream>

using namespace std;

void Now() {
  string a;
  ifstream Stat;
  Stat.open("stat.forge");
  Stat >> a;
  cout << a << endl;
  Stat.close();
}

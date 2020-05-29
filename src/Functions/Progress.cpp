#include "../functions.h"
#include <fstream>

using namespace std;

void Progress() {
  const int Len = 50, All = 2;
  const char End = '\n';
  int r = 0;
  char Name[Len][All];
  ifstream Load("score.forge");
  while (!Load.eof()) {
    Load.getline(Name[r], Len - 1, End);
    cout << Name[r] << endl;
    r++;
  }
}

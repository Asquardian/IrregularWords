#include "../functions.h"
#include <fstream>

using namespace std;

string Save(string Name) {
  int j;
  ifstream Outs;
  ofstream Save, Allnamein;
  cout << " Saving... " << endl;
  Outs.open("stat.forge");
  Outs >> j;
  Outs.close();
  Save.open("score.forge", ios::app);
  Save << Name << ":" << j;
  Save.close();
  cout << "Saving complete\n";
  return "SaveSuccess";
}

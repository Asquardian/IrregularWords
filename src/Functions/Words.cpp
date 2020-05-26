#include "../functions.h"
#include <fstream>

using namespace std;

string Words(int Form) {
  const int Len = 370, All = 1;
  const char End = '\n';
  char Word[Len][All];
  ifstream File("irregular.forge", ifstream::binary);
  for (int r = 0; r != Form; r++) {
    File.getline(Word[Form], Len - 1, End);
  }
  if (Form % 3 == 0) {
    cout << Word[Form] << "\n";
  }
  return Word[Form];
}

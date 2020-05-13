#include "../functions.h"
#include <fstream>

using namespace std;

string Save(int Num, string Name) {
  int j;
  ifstream Outs, Load;
  ofstream Save, Allnamein;
  string PerRes;
  if (Num < 1) {
    cout << "Error";
    return "0";
  }
  if (Num < 2.5 && Num >= 1) {
    Allnamein.open("NumName.forge"); //
    cout << " Saving... " << endl;
    Outs.open("stat.forge");
    Outs >> j;
    Outs.close();
    Load.open("score.forge");
    Load >> PerRes;
    Save.open("score.forge");
    if (Num == 1) {
      Save << Name << ":" << j;
    }
    if (Num == 2) {
      Save << PerRes << "\n" << Name << ":" << j;
    }
    Num++;
    Allnamein << Num;
    Allnamein.close();
    Save.close();
    cout << "Saving complete\n";
    return "SaveSuccess";
  } else {
    cout << "\nNot enough space for Save\n";
    cout << "Clear all data y/n\n";
    string Rewrite;
    cin >> Rewrite;
    if (Rewrite == "y") {
      ofstream Rest, Clear;
      Clear.open("score.forge");
      Rest.open("NumName.forge");
      Rest << 1;
      Clear << "No Data";
      Clear.close();
      Rest.close();
      cout << "Cleared\nSave again\n";
    } else
      cout << "Cancel\n";
    return "SaveNotComplete";
  }
}

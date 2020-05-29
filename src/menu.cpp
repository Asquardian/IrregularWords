#include "functions.h"
#include <fstream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int Menu() {
  int n = 0;
  system("clear");
  cout << "        Enter 'Exit' or 'exit' to quit\n";
  cout << "  Enter 'ExitMenu' or 'exitmenu' to quit in menu\n";
  cout << "  Enter 'Save' or 'save' to save your progress\n";
  cout << "  Enter 'Progress' or 'progress' to see your progress\n";
  cout << "  Enter 'Now' or 'now' to see your last score\n";
  system("figlet VerbsChecker");
  cout << "                                     ver. release v1";
  cout << "\n        Enter Mode: All or Random or Continue\n";
  while (n == 0) {
    string Choose;
    cin >> Choose;
    if (Choose == "All" || Choose == "all") {
      ofstream Out("stat.forge");
      Out << 0;
      All(3);
    }
    if (Choose == "Continue" || Choose == "continue") {
      Continue();
    }
    if (Choose == "Random" || Choose == "random") {
      ofstream Out("stat.forge");
      Out << 0;
      Random();
    }
    if (Choose == "Save" || Choose == "save") {
      cout << "Spaces will not count \nEnter your name: ";
      char Name[46];
      cin >> Name;
     // int Num = 1;
      while (strlen(Name) > 46) {
        cout << "Number of characters is more than 46";
        cin >> Name;
      }
      Save(Name);
    }
    if (Choose == "Progress" || Choose == "progress") {
      Progress();
    }
    if (Choose == "Now" || Choose == "now") {
      Now();
    }
    if (Choose == "Exit" || Choose == "exit") {
      exit(0);
    }
    if (Choose != "Save" && Choose != "save" && Choose != "Progress" &&
        Choose != "progress" && Choose != "Now" && Choose != "now") {
      system("clear");
      system("figlet VerbsChecker");
      cout << "                  Enter Mode: All or Random\n";
    }
  }
  return 0;
}

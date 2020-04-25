#include "functions.h"

Menu() {
  int n = 0;
  system("clear");
  cout << "        Enter 'Exit' or 'exit' to quit" << endl;
  cout << "  Enter 'ExitMenu' or 'exitmenu' to quit in menu" << endl;
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
      }
      if (Choose == "Exit" || Choose == "exit")
          exit(0);
      else
          cout << "Error";
      system("clear");
  }
  return 0;
}

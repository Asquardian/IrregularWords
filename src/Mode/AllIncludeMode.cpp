#include "../functions.h"

int Mode1() {
  for (int i = 3; i < 353.5; i++) {
      if (i % 3 == 0) {
          sleep(1);
	  system("clear");
          cout << "Word is ";
      }
      if (i % 3 == 2)
          cout << "PP V3 ";	
      if (i % 3 == 1)
	  cout << "PS V2 ";
      Words(i);
      if (i == 3)
          cout << "Enter like Singular/Plural" << endl;
      }
  return 0;
}

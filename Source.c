#define CRT_SECURE_NO_WARNINGS

#include "support.h"

int main(void) {
  int choice;
  struct Numbers number = { 0, 0, 0, {"\0"} };
  do {
    choice = menu();
    switch (choice) {
    case 1:
      getDecimal(&number);
      convertDecimal(&number);
      printAll(&number);
      break;
    case 2:
      getBinary(&number);
      convertBinary(&number);
      printAll(&number);
      break;
    case 3:
      getOctal(&number);
      convertOctal(&number);
      printAll(&number);
      break;
    case 4:
      getHexa(&number);
      convertHexa(&number);
      printAll(&number);
      break;
    case 0:
      break;
    
    default:
      break;
    }
  } while (choice != 0);

  return 0;
}
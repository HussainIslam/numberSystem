#include "support.h"


int menu(void) {
  int choice;
  printf("Number Conversion System\n");
  printf("------------------------\n");
  printf("1. Decimal Number\n");
  printf("2. Binary Number \n");
  printf("3. Octal Number\n");
  printf("4. Hexadecimal Number\n");
  printf("0. Exit\n");
  printf("\n");
  printf("Please enter your choice: ");
  scanf("%d", &choice);
  return choice;
}

void getDecimal(struct Numbers* numbers) {
  printf("Please enter a decimal number: ");
  scanf("%d", &numbers->decimal);
}

void getBinary(struct Numbers* numbers) {
  printf("Please enter a binary number: ");
  scanf("%d", &numbers->binary);
}

void getOctal(struct Numbers* numbers) {
  printf("Please enter a octal number: ");
  scanf("%d", &numbers->octal);
}

void getHexa(struct Numbers* numbers) {
  printf("Please enter a hexadecimal number: ");
  scanf("%[^\n]", numbers->hexadecimal);
}

void convertDecimal(struct Numbers* numbers) {
  //convert decimal to binary
  numbers->binary=decimalToBinary(numbers->decimal);
  //convert decimal to octal
  numbers->octal=decimalToOctal(numbers->decimal);
  //convert decimal to hex
  decimalToHexadecimal(numbers);
}

void convertBinary(struct Numbers* numbers) {
  //convert binary to decimal
  numbers->decimal=binaryToDecimal(numbers->binary);
  //convert binary to octal
  numbers->octal=binaryToOctal(numbers->binary);
  //convert binary to hexadecimal
  strcpy(numbers->hexadecimal,binaryToHexadecimal(numbers->binary));
  
}

void convertOctal(struct Numbers* numbers) {
  //convert octal to decimal
  numbers->decimal=octalToDecimal(numbers->octal);
  //convert octal to binary
  numbers->binary = octalToBinary(numbers->octal);
  //convert octal to hexadecimal
  strcpy(numbers->hexadecimal, octalToHexadecimal(numbers->octal));
}

void convertHexa(struct Numbers* numbers) {
  //convert hexadecimal to decimal
  numbers->decimal = hexadecimalToDecimal(numbers->hexadecimal);
  //convert hexadecimal to binary
  numbers->binary = hexadecimalToBinary(numbers->hexadecimal);
  //convert hexadecimal to octal
  numbers->octal = hexadecimalToOctal(numbers->hexadecimal);
}




void printAll(struct Numbers* numbers) {
  printf("Decimal          Binary          Octal          Hexadecimal\n");
  printf("-------         --------        -------        -------------\n");
  printf("%7d%16d%15d%21s\n\n", numbers->decimal, numbers->binary, numbers->octal, numbers->hexadecimal);
  numbers->decimal = 0;
  numbers->binary = 0;
  numbers->octal = 0;
  resetHexadecimal(numbers->hexadecimal, 40);
}

void resetHexadecimal(char* hexadecimal, int size) {
  while (size>=0) {
    hexadecimal[size] = NULL;
    size--;
  }
}
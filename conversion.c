#include "support.h"

int decimalToBinary(int decimal) {
  //declaring variables
  const int binBase = 2;
  const int decBase = 10;
  int power = 0;
  int binArray[100];
  int binNumber=0;
  int decNumber = decimal;
  int counter = 0;
  //calculating maximum power
  while (decNumber > pow(binBase, power++));
  counter = power -=2;
  //calculating the binary number
  while (power>=0) {
    binArray[power] = decNumber / (int)pow(binBase, power);
    decNumber %= (int)pow(binBase, power);
    power--;
  }
  //converting the array to single number
  for ( power = 0; power <= counter; power++) {
    binNumber += (binArray[power] * pow(decBase, power));
  } 
  return binNumber;
}

int decimalToOctal(int decimal) {
  //declaring variables
  const int octBase = 8;
  const int decBase = 10;
  int power = 0;
  int octArray[100];
  int octNumber = 0;
  int decNumber = decimal;
  int counter = 0;
  //calculating maximum power
  while (decNumber > pow(octBase, power++));
  power -= 2;
  counter = power;
  //calculating the binary number
  while (power >= 0) {
    octArray[power] = decNumber / (int)pow(octBase, power);      
    decNumber %= (int)pow(octBase, power);
    power--;
  }
  //converting the array to single number
  for (power = 0; power <= counter; power++) {
    octNumber += (octArray[power] * pow(decBase, power));
  }
  return octNumber;
}

void decimalToHexadecimal(struct Numbers* numbers) {
  //declaring variables
  const int hexBase = 16;
  const int decBase = 10;
  int power = 0;
  int decNumber = numbers->decimal;
  int counter = 0;
  while (pow(hexBase, power++) < decNumber);
  counter = power -= 2;
  while (power>=0) {
    numbers->hexadecimal[power] = decNumber / (int)(pow(hexBase, power));
   decNumber %= (int)(pow(hexBase, power));
    switch (numbers->hexadecimal[power]) {
    case 0:
      numbers->hexadecimal[power] = '0';
      break;
    case 1:
      numbers->hexadecimal[power] = '1';
      break;
    case 2:
      numbers->hexadecimal[power] = '2';
      break;
    case 3:
      numbers->hexadecimal[power] = '3';
      break;
    case 4:
      numbers->hexadecimal[power] = '4';
      break;
    case 5:
      numbers->hexadecimal[power] = '5';
      break;
    case 6:
      numbers->hexadecimal[power] = '6';
      break;
    case 7:
      numbers->hexadecimal[power] = '7';
      break;
    case 8:
      numbers->hexadecimal[power] = '8';
      break;
    case 9:
      numbers->hexadecimal[power] = '9';
      break;
    case 10:
      numbers->hexadecimal[power] = 'A';
      break;
    case 11:
      numbers->hexadecimal[power] = 'B';
      break;
    case 12:
      numbers->hexadecimal[power] = 'C';
      break;
    case 13:
      numbers->hexadecimal[power] = 'D';
      break;
    case 14:
      numbers->hexadecimal[power] = 'E';
      break;
    case 15:
      numbers->hexadecimal[power] = 'F';
      break;
    default:
      break;
    }
    power--;
  }
}

int binaryToDecimal(int binary) {

}

int binaryToOctal(int binary) {

}

char binaryToHexadecimal(int binary) {

}

int octalToDecimal(int octal) {

}

int octalToBinary(int octal) {

}

char octalToHexadecimal(int octal) {

}

int hexadecimalToDecimal(char hexadecimal[]) {

}

int hexadecimalToBinary(char hexadecimal[]) {

}

int hexadecimalToOctal(char hexadecimal[]) {

}
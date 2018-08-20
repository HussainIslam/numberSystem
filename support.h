#include <stdio.h>
#include <string.h>
#include <math.h>

struct Numbers {
  int decimal;
  int binary;
  int octal;
  char hexadecimal[40];
};

int menu(void);
void getDecimal(struct Numbers* numbers);
void getBinary(struct Numbers* numbers);
void getOctal(struct Numbers* numbers);
void getHexa(struct Numbers* numbers);

void convertDecimal(struct Numbers* numbers);
void convertBinary(struct Numbers* numbers);
void convertOctal(struct Numbers* numbers);
void convertHexa(struct Numbers* numbers);


int decimalToBinary(int decimal);
int decimalToOctal(int decimal);
void decimalToHexadecimal(struct Numbers* numbers);
int binaryToDecimal(int binary);
int binaryToOctal(int binary);
char binaryToHexadecimal(int binary);
int octalToDecimal(int octal);
int octalToBinary(int octal);
char octalToHexadecimal(int octal);
int hexadecimalToDecimal(char hexadecimal[]);
int hexadecimalToBinary(char hexadecimal[]);
int hexadecimalToOctal(char hexadecimal[]);

void resetHexadecimal(char* hexadecimal, int size);
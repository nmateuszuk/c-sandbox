#include <stdio.h>
void hexadecimalToBinary() {
  char hexChar;
  printf("Enter a hexadecimal value (one digit): ");
  scanf("%c", &hexChar);
  switch (hexChar) {
  case '0':
    printf("0000");
    break;
  case '1':
    printf("0001");
    break;
  case '2':
    printf("0010");
    break;
  case '3':
    printf("0011");
    break;
  case '4':
    printf("0100");
    break;
  case '5':
    printf("0101");
    break;
  case '6':
    printf("0110");
    break;
  case '7':
    printf("0111");
    break;
  case '8':
    printf("1000");
    break;
  case '9':
    printf("1001");
    break;
  case 'A':
    printf("1010");
    break;
  case 'B':
    printf("1011");
    break;
  case 'C':
    printf("1100");
    break;
  case 'D':
    printf("1101");
    break;
  case 'E':
    printf("1110");
    break;
  case 'F':
    printf("1111");
    break;
  default:
    printf("Seems you inserted something not as expected... Please try again "
           "next time..\n");
  }
}

void printCharInotherNotations() {
  char myChar;

  printf("enter character\n");
  scanf("%d", &myChar);

  printf("character: %c\n", myChar);
  printf("character in decimal ascii code: %d\n", myChar);
  printf("character in hexadecimal ascii code: %X\n", myChar);
}

void printDateInHex() {
  int day;
  int month;
  int year;
  printf("print in hexadecimal int day, month, year\n");

  printf("enter day\n");
  scanf("%d", &day);
  printf("enter month\n");
  scanf("%d", &month);
  printf("enter year\n");
  scanf("%d", &year);

  printf("Day: 0x%X\n", day);
  printf("Day: 0x%X\n", month);
  printf("Day: 0x%X \n", year);
}

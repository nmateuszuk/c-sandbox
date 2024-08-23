#include <stdio.h>

void if_passed() {
  int score;
  printf("input your score 0-100 \n");
  scanf("%d", &score);
  if (score >= 60) {
    printf("congratulations! passed!\n");
  } else {
    printf("failed, try again!\n");
  }
}

void odOrEvenNumber() {
  int number1;
  printf("input number \n");
  scanf("%d", &number1);
  if (number1 % 2 == 0) {
    printf("even number \n");
  } else {
    printf("number is odd\n");
  }
}

void whatCharacterEntered() {
  char myCharacter;
  printf("enter character\n");
  scanf("%c", &myCharacter);

  if (myCharacter >= 'A' && myCharacter <= 'Z') {
    printf("upper case character\n");
  }
  if (myCharacter >= 'a' && myCharacter <= 'z') {
    printf("lower case character\n");
  }
  if (myCharacter >= '0' && myCharacter <= '9') {
    printf("digit\n");
  } else
    printf("other\n");
}
#include <stdio.h>

void printPyramid(int rows) {
  int numberToPrint = 1;
  int blankSpace = rows - 1;
  for (int i = 1; i <= rows; i++) {
    for (int j = blankSpace; j >= 1; j--) {
      printf(" ");
    }
    for (int k = 1; k <= i; k++) {
      printf("%3d", numberToPrint);
      numberToPrint++;
    }
    printf("\n");
    blankSpace--;
  }
}
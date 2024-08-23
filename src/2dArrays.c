
#include <stdio.h>
void print2DArray() {
  printf("  print  matrix for 2 arrays");
  int my2DArray[2][3] = {{1, 2, 3}, {4, 5, 7}};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d", my2DArray[i][j]);
    }
    printf("\n");
  }
}

void multiplicationMatrix(int size) {

  printf(" fill and print multiplication matrix for size: %d\n", size);
  int mat[size][size];

  // fill values in the table
  for (int i = 1; i < size; i++) {
    for (int j = 1; j < size; j++) {
      mat[i][j] = i * j;
    }
  }

  for (int i = 1; i < size; i++) {
    for (int j = 1; j < size; j++) {
      printf("%5d ", mat[i][j]);
    }
    printf("\n");
  }
}
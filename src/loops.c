#include <stdio.h>

void loops() {
  for (int i = 0; i < 5; i++) {
    printf("**********\n");
  }

  for (int i = 1; i < 6; i++) {
    for (int j = 1; j < i + 1; j++) {
      printf("%d", j);
    }
    for (int k = i; k < 11; k++) {
      printf("*");
    }
    printf("\n");
  }
}
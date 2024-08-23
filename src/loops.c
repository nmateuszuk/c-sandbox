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

void loops2() {
  int count = 0;
  while (count < 10) {
    printf("*");
    count++;
  }
  printf("\n");
}

void loopsNumber1() {
  int n = 10;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d", j);
    }

    printf("\n");
  }
}

void loopsNumber2() {
  int n = 9;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      printf("%d", i);
    }

    printf("\n");
  }
}

void loopsNumber3() {
  int num = 10;

  for (int i = 1; i <= num; i++) {
    printf("%d,", i);
  }
  printf("\n");
  for (int j = num; j >= 1; j--) {
    printf("%d,", j);
  }
  printf("\n");
  printf("");
}
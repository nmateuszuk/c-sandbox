#include <stdio.h>

void basic_calculator() {
  printf("calculator");
  printf("addition of 2 and 5 is %d\n", 2 + 5);
  printf("substraction of 2 and 5 is %d\n", 2 - 5);
  printf("multiplication of 2 and 5 is %d\n", 2 * 5);
  printf("division of 2 and 5 is %d\n", (2 / 5));
  printf("division of 2 and 5.0 is %f\n", (2 / 5.0));
  printf("remainder of 2 and 5 division is %d\n", 2 % 5);
  printf("%d %%%d=%d\n", 5, 2, 5 % 2);
}

void multiplicationTable() {
  int num;
  printf("enter number to draw multiplication table\n");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++) {
    printf("%d * %d = %d \n", num, i, num * i);
  }
}

void sumOfNumbers() {
  int num = 10;
  int sum = 0;

  for (int i = 1; i <= num; i++) {
    printf("%d,", i);
    sum = sum + i;
  }
  printf("\nsum= %d\n", sum);
}

void getOnlyDecimal() {

  float c = 12.7;
  int e = (int)c;
  float d = c - e;
  printf("b=%.1f\n", d);
}
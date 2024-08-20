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

#include <math.h>;
#include <stdio.h>
void findBiggerNumber() {
  int number1, number2;
  printf("input two numbers \n");
  scanf("%d %d", &number1, &number2);
  printf("max is %d \n", (int)fmax(number1, number2));
  printf("max is %d \n", (number1 > number2) ? number1 : number2);
}
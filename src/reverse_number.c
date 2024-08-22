#include <stdio.h>
void reverseNumber() {
  int n;
  printf("print reverse number int n\n enter number up to 999\n");
  scanf("%d", &n);

  int units = n % 10;

  int tens = n % 100 / 10;

  int hundreds = n / 100;

  // printf("reverse number %d%d%d\n", units, tens, hundreds);

  int reverse = units * 100 + tens * 10 + hundreds;
  printf("reverse number %d\n", reverse);
}
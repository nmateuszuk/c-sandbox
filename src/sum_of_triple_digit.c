#include <stdio.h>
void tripleSum() {
  int n;
  printf("sum of triple digits, enter number up to 999:\n");
  scanf("%d", &n);
  int sum = 0;
  int a = n / 100;
  int b = (n % 100) / 10;
  int c = n % 10;
  sum = a + b + c;
  printf("sum of triple digits %d\n", sum);

  printf("number %d\n", n % 10);
  printf("number %d\n", n % 100 / 10);
  printf("number %d\n", n / 100);
}
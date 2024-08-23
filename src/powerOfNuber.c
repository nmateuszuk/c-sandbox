#include <math.h>
#include <stdio.h>

void numberToPower() {
  double x;
  printf("Enter number:\n");
  scanf("%lf", &x);
  printf("Given number: %.2lf\n", x);
  printf("%.2lf raised to the power of 2: %.2lf\n", x, pow(x, 2.0));
  printf("%.2lf raised to the power of 4: %.2lf\n", x, pow(x, 4.0));
  printf("%.2lf raised to the power of 6: %.2lf\n", x, pow(x, 6.0));
  printf("%.2lf raised to the power of 8: %.2lf\n", x, pow(x, 8.0));
}
#include <stdio.h>

void arithmetical_progression() {
  printf("value of an element of arithmetical progression\n");
  float a1;
  float d;
  int n;
  printf("provide a1\n");
  scanf("%f", &a1);
  printf("provide d\n");
  scanf("%f", &d);
  printf("provide n\n");
  scanf("%d", &n);
  float an;
  an = a1 + (n - 1) * d;
  printf("value of an element of arithmetical progression %f\n", an);
}
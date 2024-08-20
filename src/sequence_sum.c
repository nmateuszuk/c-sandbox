#include <stdio.h>

void sequence_sum() {
  float a1, an;
  int n;
  printf("provide a1\n");
  scanf("%f", &a1);
  printf("provide an\n");
  scanf("%f", &an);
  printf("provide n\n");
  scanf("%d", &n);
  float sn;
  sn = (a1 + an) * n / 2;
  printf("value of sum of sequence %.2f\n", sn);
}
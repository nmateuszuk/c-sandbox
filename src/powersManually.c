
#include <stdio.h>

void numberToPowerOf(int num3, int pow2) {
  //   int num3 = 2;
  //   int pow2 = 3;
  int result2 = 1;

  for (int i = 0; i < pow2; i++) {
    result2 = result2 * num3;
  }
  printf("result %d\n", result2);
}

void numberToPowerVer2(int num, int pow) {
  //   int num = 2;
  //   int pow = 3;
  int result = 1;
  int i = 0;
  while (pow > 0) {
    result = result * num;
    pow--;
  }
  printf("result %d\n", result);
}
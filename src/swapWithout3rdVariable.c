#include <stdio.h>

void swap2() {
  int a = 10;
  int b = 20;

  a = a + b; // 30
  b = a - b; // 10
  a = a - b; // 20
}
#include <stdio.h>

void simple_pointers_example() {
  int a = 5;
  // pointer to int
  int *p;
  p = &a;

  // adresses of "a"
  printf("Element adress = %p\n", &a);
  printf("Element adress = %p\n", &p);

  // value of "a"
  printf("Element value %d\n", a);
  printf("Element value  %d\n", *p);
}

void pointers_grades_example() {
  printf("simple representation of grade value and adress \n");
  int grade1 = 80;
  int grade2 = 100;

  printf("grade1 value = %d\n", grade1);
  printf("grade1 Addres  %p\n", &grade1);
  printf("grade2 value = %d\n", grade2);
  printf("grade2 Addres  %p\n", &grade2);
}

void pointers_example_2() {
  printf("simple exercise to check which values will be modify \n");
  int num3 = 5, num4 = 7;
  int *ptrA, *ptrB;
  printf("num1= %d, num2= %d \n", num3, num4);
  ptrA = &num3;
  ptrB = &num4;
  printf("num1= %d, num2= %d \n", num3, num4);
  *ptrA = *ptrA + 1;
  *ptrB = *ptrB + 3;
  printf("num1= %d, num2= %d \n", num3, num4);
  ptrA = ptrB;
  ptrB = ptrA;
  printf("num1= %d, num2= %d \n", num3, num4);
  printf("ptrA= %d, ptrB= %d \n", *ptrA, *ptrB);
  num3 = *ptrB;
  num4 = num3 - 3;
  printf("num1= %d, num2= %d \n", num3, num4);
  printf("ptrA= %d, ptrB= %d \n", *ptrA, *ptrB);
}

void findMinMax(int num1, int num2, int *pMax, int *pMin) {
  if (num1 > num2) {
    *pMin = num2;
    *pMax = num1;
  } else {
    *pMin = num1;
    *pMax = num2;
  }
}
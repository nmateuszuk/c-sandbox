#include "all.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int num1, int num2) {
  int temp;

  temp = num1;
  num1 = num2;
  num2 = temp;
}

void swapPointer(int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

void printGreeting() { printf("Hello! \n"); }

int main() {
  hello_world();
  // printf_formatting();
  // basic_calculator();
  // loops();
  //  scanf_example1();
  //  scanf_example2();
  //  arithmetical_progression();
  //  sequence_sum();
  //  salary_calculation();
  // simple_pointers_example();
  // pointers_grades_example();
  // pointers_example_2();
  //  time_to_drive();
  // reverseNumber();
  // countWordsInSentence();
  // initializeStructPrint();

  printf("---------------------------\n");
  char str5[] = "kot";
  isPalindorme(str5);

  printf("---------------------------\n");
  int arrPalindorme[5] = {1, 2, 3, 2, 1};
  int arrPalindormeSize = 5;

  int isPalindorme = palindrome(arrPalindorme, arrPalindormeSize);

  if (isPalindorme == 0) {
    printf("is not a palindrome\n");
  } else if (isPalindorme == 1) {
    printf("is a palindrome\n");
  }

  printf("---------------------------\n");
  int a = 6, b = 8;
  int min, max;
  findMinMax(a, b, &max, &min);
  printf("max is %d, min is %d \n", max, min);
  printf("---------------------------\n");

  int array1[5] = {1, 4, 3, 7, 1};
  int array2[5] = {5, 7, 1, 5, 2};
  int sunNeighbors = largestSum(array1);
  printf("largest neighbors sum is= %d\n", sunNeighbors);
  printf("---------------------------\n");

  // example why passing by value wont work and we need to pass by reference
  int num1 = 1, num2 = 7;
  printf("num1= %d, num2= %d \n", num1, num2);
  printf("Element num1 adress = %lu\n", &num1);
  printf("Element num2 adress = %lu\n", &num2);
  swap(num1, num2);
  printf("num1= %d, num2= %d \n", num1, num2);
  printf("Element num1 adress = %lu\n", &num1);
  printf("Element num2 adress = %lu\n", &num2);
  // pass by reference
  swapPointer(&num1, &num2);
  printf("num1= %d, num2= %d \n", num1, num2);
  printf("Element num1 adress = %lu\n", &num1);
  printf("Element num2 adress = %lu\n", &num2);
  printf("\n---------------------------\n");
  //-------------------------------------

  int array3[5] = {1, 2, 5, 7, 10};
  // int array4[5] = {1, 2, 2, 7, 10};

  // int array5[5] = {1, 6, 5, 2, 10};
  // int array6[5] = {10, 6, 13, 2, 1};

  // const char *resultOrder = checkArrayOrder(array4, 5);
  // printf("%s\n", resultOrder);

  const char *resultOrder2 = checkArrayOrder(array3, 5);
  printf("%s\n", resultOrder2);

  // const char *resultOrder3 = checkArrayOrder(array5, 5);
  // printf("%s\n", resultOrder3);

  // const char *resultOrder4 = checkArrayOrder(array6, 5);
  // printf("%s\n", resultOrder4);

  printf("\n---------------------------\n");
  //-------------------------------------
  // piramid
  int rows = 10;
  printPyramid(rows);

  printf("\n---------------------------\n");
  //-------------------------------------

  int arrayToCheck[9] = {1, 3, 5, 6, 7, 6, 3, 8, 8};
  int size = sizeof(arrayToCheck) / sizeof(arrayToCheck[0]);

  findMultipliedElements(arrayToCheck, size);

  //-------------------

  printf("\n---------------------------\n");
  int arayToShift[] = {5, 4, 7, 3};
  int shift = 2;
  int sizeOfArayToShift = 4;
  rotate_array_n(arayToShift, shift, sizeOfArayToShift);
  rotate_array_right(arayToShift, 1, sizeOfArayToShift);
  printf("\n---------------------------\n");

  printf("\n---------------------------\n");
  float x1 = 1;
  float x2 = 4;
  float y1 = 3;
  float y2 = 7;
  calculateDistanceBetweenPoints(x1, x2, y1, y2);
  printf("\n---------------------------\n");

  int arayToCountClosetozero[] = {5, 4, 7, 3, 6, 1, -2, -20};
  int sizeToZero = 8;
  elementsSumClosestToZero(arayToCountClosetozero, sizeToZero);
  printf("\n---------------------------\n");

  arrayElemntsSum(arayToCountClosetozero, size);

  printf("\n---------------------------\n");

  resetArrayToZero(arayToCountClosetozero, size);

  printf("\n---------------------------\n");

  // printNextDate();

  // int value = findMaxRecursive(4);
  // printf("\n--------%d -------------------\n", value);
}

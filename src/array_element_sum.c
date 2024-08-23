#include <stdio.h>
#include <stdlib.h>
void elementsSumClosestToZero(int arayToCountClosetozero[], int size) {
  int min1, min2;
  int sum;

  printf("find 2 elements of array which sum is closest to zero\n");

  for (int i = 0; i < size; i++) {

    for (int j = 0; j < size; j++)
      if (i != j) {
        int tempSum = arayToCountClosetozero[i] + arayToCountClosetozero[j];
        if (abs(tempSum) < abs(sum)) {
          sum = tempSum;
          min1 = i;
          min2 = j;
        }
      }
  }

  printf("elements: %d and %d sum =%d \n", arayToCountClosetozero[min1],
         arayToCountClosetozero[min2], sum);
}

void arrayElemntsSum(int array[], int size) {

  int sum = 0;

  printf("sum up array elements\n");

  for (int i = 0; i < size; i++) {
    sum += array[i];
  }

  printf("elements sum =%d \n", sum);
}

void resetArrayToZero(int *ptr, int size) {

  printf("reset array to 0\n before: \n");
  for (int i = 0; i < size; i++) {
    printf("%d,", ptr[i]);
  }

  printf("\n");
  for (int i = 0; i < size; i++) {

    ptr[i] = 0;
  }

  printf("After: \n");
  for (int i = 0; i < size; i++) {
    printf("%d, ", ptr[i]);
  }
  printf("\n");
}

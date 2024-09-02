// swap 2 array of the same size, values one-by-one

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

// complexity O(n) / O(size)  we had to iterate all elements
//  int array1[SIZE]= {1,3,6,8,10};

// int array2[SIZE]= {2,5,4,11,18};

void swapValue(int *val1, int *val2) {
  int temp;
  temp = *val1;
  *val1 = *val2;
  *val2 = temp;
}

void swapArray(int *array1, int *array2) {
  for (int i = 0; i < SIZE; i++) {
    swapValue(&array1[i], &array2[i]);
  }
}

void printArray(int *array) {
  for (int i = 0; i < SIZE; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

//-----------------------------------------------
/// o(1) complexity

int *generateArray(int size) {
  int *arr;
  arr = (int *)malloc(size * sizeof(int));
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
    return arr;
  }
}

// in main
// int sizeArr1, sizeArr2;
//  int *Arr1, *Arr2;
// scanf for sizes
// Arr1=generateArray(sizeArr1);
// Arr2=generateArray(sizeArr2);

void swapArrayO1(int **ptr1, int **ptr2) {
  // void swapArrayO1(void **ptr1, void **ptr2) {
  int *temp; // void *temp;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}
// swapArrayO1(&Arr1, &Arr2);
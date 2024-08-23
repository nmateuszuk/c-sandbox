#include <stdio.h>
#include <string.h>

void copyArray(int date1[], int date2[], int size) {

  for (int i = 0; i < size; i++) {
    date2[i] = date1[i];
  }

  for (int i = 0; i < size; i++) {
    date2[i] = date1[i];
  }
}

int palindrome(int arrPalindorme[], int size) {

  int flag = 1;

  for (int i = 0; i < size / 2; i++) {
    if (arrPalindorme[i] != arrPalindorme[size - 1 - i]) {
      flag = 0;
      break;
    }
  }
  //   if (flag == 0) {
  //     printf("not a palindrome\n");
  //   } else if (flag == 1) {
  //     printf("palindrome\n");
  //   }

  return flag;
}

// largest adjacent (neighbour) in array
int largestSum(int array1[]) {

  int sum = 0;
  for (int i = 0; i < 5; i++) {

    if (sum < array1[i] + array1[i + 1]) {
      sum = array1[i] + array1[i + 1];
    }
  }
  printf("sum: %d\n ", sum);

  return sum;
}

const char *checkArrayOrder(int array4[], int size) {

  printf("checking if array is ascending, descending or it is neither\n");

  printf("array to check \n");

  for (int i = 0; i < size; i++) {
    printf("%d ", array4[i]);
  }
  printf("\n");
  int ascending = 0;
  int descending = 0;

  if (array4[0] < array4[1]) {
    for (int i = 1; i < size; i++) {
      if (array4[i - 1] < array4[i]) {
        ascending = 1;
      } else if (array4[i - 1] == array4[i]) {
        ascending = 2;
      } else {
        ascending = 0;
        break;
      }
    }
  } else if (array4[0] > array4[1]) {
    for (int i = 1; i < size; i++) {
      if (array4[i - 1] > array4[i]) {
        descending = 1;
      } else if (array4[i - 1] == array4[i]) {
        descending = 2;
      } else {
        descending = 0;
        break;
      }
    }
  }

  if (ascending == 1) {
    return "sorted ascending";
  } else if (ascending == 2) {
    return "sorted not so well ascending";
  } else if (descending == 1) {
    return "sorted descending";
  } else if (descending == 2) {
    return "sorted not so well descending";
  } else {
    return "it is neither";
  }
}

// int Arr[] = {1, 2, 3, 4, 5};

// // variable to store size of Arr
// int length = sizeof(Arr) / sizeof(Arr[0]);

// printf("The length of the array is: %d\n", length);

// size_t array_size = sizeof(my_array);
// size_t list_length = sizeof(my_array) / sizeof(my_array[0]);
// int list_length = sizeof(my_array) / sizeof(my_array[0]);

//-------------------------

// int arrayInt[] = {7, 2, 4, 9, 1};
// int min = arrayInt[0];

// for (int i = 1; i <= 5 - 1; i++) {
//   if (min > arrayInt[i]) {
//     min = arrayInt[i];
//   }
// }
// printf(" min is %d\n", min);
//-------------------------

// int arr[5];
// arr[0];
// arr[1];
// printf("Element 1 adress = %lu\n", &arr[0]);
// printf("Element 2 adress = %lu\n", &arr[1]);
//-------------------------
// int arr2D[2][2];
// arr2D[0][0] = 3;
// arr2D[0][1] = 5;
// printf("Element 1 adress = %lu\n", &arr2D[0][0]);
// printf("Element 2 adress = %lu\n", &arr2D[0][1]);

//------------------------------

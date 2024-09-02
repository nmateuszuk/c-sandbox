#include <stdio.h>

void countOccurence(int arrayOfInt[], int size) {
  int count0 = 0;
  int count1 = 0;
  int not1or0 = 0;
  for (int i = 0; i < size; i++) {
    if (arrayOfInt[i] == 0) {
      count0++;
    } else if (arrayOfInt[i] == 1) {
      count1++;
    } else {
      printf("%d\n", arrayOfInt[i]);
      printf("not a 0 or 1\n");
      not1or0 = -1;
      break;
    }
  }
  if (not1or0 == -1) {
    printf("not all zeros or ones\n");
  } else {
    printf("number of 0 : %d, number of 1: %d\n", count0, count1);
  }
}

void countOccurenceSmarter(int arr[], int size, int t) {
  int counter[t];
  for (int i = 0; i < t; i++) {
    counter[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    counter[arr[i]]++;
  }

  for (int i = 0; i < 6; i++) {
    printf("%d: %d\n", i, counter[i]);
  }
}

void findMostFreqent(int arr[], int size, int counterSize) {
  int counter[counterSize];
  for (int i = 0; i < counterSize; i++) {
    counter[i] = 0;
  }
  for (int i = 0; i < size; i++) {
    counter[i]++;
  }

  int maxIndex = 0;

  for (int i = 0; i < counterSize; i++) {
    if (counter[i] > counter[maxIndex])
      ;
    maxIndex = i;
  }
  printf("most frequent element = %d \n", counter[maxIndex]);
}

// //for values 5-10 in array
void findMostFreqent5To10(int arr[], int size, int counterSize) {
  int counter[counterSize];
  for (int i = 0; i < counterSize; i++) {
    counter[i] = 0;
  }

  for (int i = 0; i < size; i++) {
    int indexToIncrement = arr[i] - 5;
    counter[indexToIncrement]++;
  }

  int maxIndex = 0;

  for (int i = 0; i < 6; i++) {
    if (counter[i] > counter[maxIndex])
      maxIndex = i;
  }
  printf("most frequent element = %d \n", maxIndex + 5);
}

//   char arr[] = {'k', 'i', 'g', 'f', 'o', 'k', 'l', 'u', 'k'};
//   int arrSize = sizeof(arr) / sizeof(arr[0]);
void countChars(char arr[], int arrSize) {
  int countChar[26] = {0};
  int maxIndex = 0;

  for (int i = 0; i < arrSize; i++) {
    countChar[arr[i] - 'a']++; //'a' == 97  for big letters -'A'
  }

  for (int i = 0; i < 26; i++) {
    if (countChar[i] > countChar[maxIndex])
      maxIndex = i;
  }
  printf("most frequent element = %c \n", maxIndex + 'a');
  printf("occurances = %d \n", countChar[maxIndex]);
}

// mix of lower and upper cases letters
void countCharsLowerUpper(char arr[], int arrSize) {
  int countChar[52] = {0};
  int maxIndex = 0;

  for (int i = 0; i < arrSize; i++) {
    if (arr[i] >= 'a' && arr[i] <= 'z') {
      countChar[arr[i] - 'a']++;
    } else if (arr[i] >= 'A' && arr[i] <= 'Z')
      countChar[arr[i] - 'A' + 26]++;
  }

  for (int i = 0; i < 52; i++) {
    if (countChar[i] > countChar[maxIndex])
      maxIndex = i;
  }
  if (maxIndex < 26) {
    printf("most frequent element = %c \n", maxIndex + 'a');
    printf("occurances = %d \n", countChar[maxIndex]);
  } else {
    printf("most frequent element = %c \n", maxIndex - 26 + 'A');
    printf("occurances = %d \n", countChar[maxIndex]);
  }
}
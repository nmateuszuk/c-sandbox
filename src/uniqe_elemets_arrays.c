#include <stdio.h>

void findOnlySingleElements(int arrayToCheck[], int size) {

  int uniqeArray2[size];
  int uniqeArrayCounter2 = 0;

  for (int i = 0; i < size; i++) {
    printf("%d ", arrayToCheck[i]);
    int uniqe = 1; // Reset uniqe for each element
    for (int j = 0; j < size; j++) {
      if (i != j && arrayToCheck[i] == arrayToCheck[j]) {
        uniqe = 0;
        break;
      }
    }
    if (uniqe == 1) {
      uniqeArray2[uniqeArrayCounter2] = arrayToCheck[i];
      uniqeArrayCounter2++;
    }
  }

  printf("Unique elements in this array: ");
  for (int i = 0; i < uniqeArrayCounter2; i++) {
    printf("%d ", uniqeArray2[i]);
  }
}

void printWithoutRepetitions(int arrayToCheck[], int size) {

  int uniqeArray[size];
  int uniqeArrayCounter = 0;
  int foundDuplicate;

  for (int i = 0; i < size; i++) {
    foundDuplicate = 0; // Reset foundDuplicate for each element
    for (int j = 0; j < size; j++) {
      if (arrayToCheck[i] == uniqeArray[j]) {
        foundDuplicate = 1;
        break;
      }
    }
    if (!foundDuplicate) {
      uniqeArray[uniqeArrayCounter] = arrayToCheck[i];
      uniqeArrayCounter++;
    }
  }

  // Print unique elements
  printf("Unique elements: ");
  for (int i = 0; i < uniqeArrayCounter; i++) {
    printf("%d ", uniqeArray[i]);
  }
  printf("\n");
  //-------------------------------
}

void findMultipliedElements(int arrayToCheck[], int size) {

  int nonUniqeCounter = 0;

  int nonUniqueArray[9];
  int nonUniqueCounter = 0;

  for (int i = 0; i < size; i++) {
    int isDuplicate = 0;
    for (int j = 0; j < size; j++) {
      if (i != j && arrayToCheck[i] == arrayToCheck[j]) {
        isDuplicate = 1;
        break;
      }
    }
    if (isDuplicate) {
      // Check if the element is already in nonUniqueArray
      int alreadyAdded = 0;
      for (int k = 0; k < nonUniqueCounter; k++) {
        if (nonUniqueArray[k] == arrayToCheck[i]) {
          alreadyAdded = 1;
          break;
        }
      }
      if (!alreadyAdded) {
        nonUniqueArray[nonUniqueCounter] = arrayToCheck[i];
        nonUniqueCounter++;
      }
    }
  }

  // Print non-unique elements
  printf("Non-unique elements: ");
  for (int i = 0; i < nonUniqueCounter; i++) {
    printf("%d ", nonUniqueArray[i]);
  }
  printf("\n");
}
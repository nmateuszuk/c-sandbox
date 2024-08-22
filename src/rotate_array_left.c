#include <stdio.h>
void rotate_array_n(int array7[], int shift, int size) {
  printf("array carusel, wrap around left by shift of %d\n", shift);

  int arrayCarusel[size];
  // int shift = 4;
  for (int i = 0; i < 4; i++) {

    if (i - shift < 0) {
      int newPosition = i - shift + size;
      arrayCarusel[newPosition] = array7[i];
    } else {

      int newPosition = i - shift;
      arrayCarusel[newPosition] = array7[i];
    }
  }

  for (int i = 0; i < 4; i++) {

    printf("%d .", arrayCarusel[i]);
  }
  printf("\n");
}

// another approach
void rotate_array_1(int array7[], int size) {
  int temp = array7[0];

  for (int i = 1; i < size; i++) {
    array7[i - 1] = array7[i];
  }
  array7[size - 1] = temp;
}
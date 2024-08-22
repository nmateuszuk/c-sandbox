#include <stdio.h>

void rotate_array_right(int array7[], int shift, int size) {
  printf("array carusel, wrap around right by shift of %d\n", shift);
  int arrayCarusel[size];
  for (int i = 0; i < 4; i++) {

    if (i - 4 + shift >= 0) {
      int newPosition = (i + shift) - size;
      arrayCarusel[newPosition] = array7[i];
    } else {

      int newPosition = i + shift;
      arrayCarusel[newPosition] = array7[i];
    }
  }

  for (int i = 0; i < 4; i++) {
    printf("%d .", arrayCarusel[i]);
  }
  printf("\n");
}
#include <stdio.h>
void grade() {
  char grade;
  printf("Enter your grade (A-F):\n");
  scanf("%c", &grade);
  switch (grade) {
  case 'A':
    printf("grade between 90-100\n");
    break;

  case 'B':
    printf("grade between 80-89\n");
    break;

  case 'C':
    printf("grade between 70-79\n");
    break;

  case 'D':
    printf("grade between 60-69\n");
    break;

  case 'E':
    printf("grade between 50-59\n");
    break;

  case 'F':
    printf("grade between 0-49\n");
    break;
  default:
    printf("Error!\n");
  }
}
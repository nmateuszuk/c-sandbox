#include <stdio.h>

void scanf_example1() {
  int current_year;
  int your_age;
  printf("provide current year\n");
  scanf("%d", &current_year);
  printf("provide your age\n");
  scanf("%d", &your_age);
  printf("My year of birth %d\n", current_year - your_age);
}

void scanf_example2() {
  double length;
  double width;
  printf("provide rectange length\n");
  scanf("%lf", &length);
  printf("provide rectange width\n");
  scanf("%lf", &width);
  double rectangle_field;
  rectangle_field = length * width;
  printf("field of rectangle %f\n", rectangle_field);
}
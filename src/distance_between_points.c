#include <math.h>
#include <stdio.h>

void calculateDistanceBetweenPoints(float x1, float x2, float y1, float y2) {
  printf("calculating distance between points\n");
  float a = x1 - x2;
  float b = y1 - y2;

  float distance = sqrt(a * a + b * b);
  printf("distance is %.2f \n", distance);
}
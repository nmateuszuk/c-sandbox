#include <stdio.h>
typedef struct date {
  int day;
  int month;
  int year;
} Date;

typedef struct point {
  int x;
  int y;
} Point;

// Creating a "static array of points"

void createPrintArrayOfPoints() {
  Point pointsArray[5];

  for (int i = 0; i < 5; i++) {
    printf("Enter %d point 'x' coordinates\n", i + 1);
    scanf("%d", &pointsArray[i].x);
    printf("Enter %d point 'y' coordinates\n", i + 1);
    scanf("%d", &pointsArray[i].y);
  }

  for (int i = 0; i < 5; i++) {
    printf(" Point %d coordinates [%d, %d}\n", i + 1, pointsArray[i].x,
           pointsArray[i].y);
  }
}

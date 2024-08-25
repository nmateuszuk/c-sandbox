
#include <stdio.h>
// create structure template
typedef struct date {
  int day;
  int month;
  int year;
} Date;

typedef struct point {
  int x;
  int y;
} Point;

// declaring a variable of structure type
// struct date mtDate1, myDate2;
// myDate1.day=10;

void pointStructPrint() {
  struct point p1;
  printf("enter x coordinate\n");
  scanf("%d", &p1.x);
  printf("enter y coordinate\n");
  scanf("%d", &p1.y);
  printf("The point is (%d,%d), p1.x, p1.y\n");
}

Date inputDate() {
  Date date1;
  printf("enter day \n");
  scanf("%d", &date1.day);
  printf("enter month \n");
  scanf("%d", &date1.month);
  printf("enter year \n");
  scanf("%d", &date1.year);
  printf("The date is (%d-%d-%d)\n", date1.day, date1.month, date1.year);
  return date1;
}

// how to use:
//  Date date1;
//  date1 = inputDate();

//-------------------
typedef struct adress {
  char state[20];
  char city[15];
  char street[20];
  int number;
} Adress;

void printAdress(Adress ad) {
  printf("state: %s, city: %s, street: %s, num: %d \n", ad.state, ad.city,
         ad.street, ad.number);
}

void printNextDate() {
  Date currentDate = inputDate();

  currentDate.day = currentDate.day + 1;
  if (currentDate.month == 2 && currentDate.year % 4 == 0 &&
      currentDate.day > 29) {
    currentDate.day = 1;
    currentDate.month++;
  } else if (currentDate.month == 2 && currentDate.year % 4 != 0 &&
             currentDate.day > 28) {
    currentDate.day = 1;
    currentDate.month++;
  } else if (currentDate.month == 4 || currentDate.month == 6 ||
             currentDate.month == 9 || currentDate.month == 11) {
    if (currentDate.day > 30) {
      currentDate.day = 1;
      currentDate.month++;
    }
  } else if (currentDate.month == 12 && currentDate.day > 31) {
    currentDate.day = 1;
    currentDate.month = 1;
    currentDate.year++;
  } else if (currentDate.month == 1 || currentDate.month == 3 ||
             currentDate.month == 5 || currentDate.month == 7 ||
             currentDate.month == 8 || currentDate.month == 10) {
    if (currentDate.day > 31) {
      currentDate.day = 1;
      currentDate.month++;
    }
  }
  printf("The date is (%d-%d-%d)\n", currentDate.day, currentDate.month,
         currentDate.year);
}

// Initializing a struct
//  declaring a "Point" variable (without initialization)
Point p1;

// Initializing a "Point" variable (members in order)
Point p2 = {4, 8};

// Using designated initializer
Point point3 = {.x = 3, .y = 9};

// Using designated initializer out of order
Point point4 = {.y = 9, .x = 3};

// designated initializer (other members are initialized with 0)
Point point5 = {.x = 2};

int equalPoint(Point p1, Point p2) {
  if (p1.x == p2.x && p1.y == p2.y) {
    return 1;
  } else
    return 0;
}

int notEqualPoint(Point p1, Point p2) {
  if (p1.x != p2.x && p1.y != p2.y) {
    return 1;
  } else
    return 0;
}

Point addition(Point p1, Point p2) {
  Point result;
  result.x = p1.x + p2.x;
  result.y = p1.y + p2.y;
  return result;
}

Point increment(Point *p) {
  (*p).x++;
  (*p).y++;
}
// increment(&p1);

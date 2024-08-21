#include <stdio.h>

// milion dollars or 1 cent doule every day
int milionDollars() {
  int milionInCents = 1000000;
  int countDays = 1;
  float countMoney = 0.01;

  while (countDays <= 30) {
    countMoney = countMoney * 2;
    countDays++;
  }
  printf("total amount of money after 30days %.2f \n ", countMoney);
}
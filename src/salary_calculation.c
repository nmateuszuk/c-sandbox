#include <stdio.h>

void salary_calculation() {
  float salaryHour;
  int hours;
  printf("provide salary per hour\n");
  scanf("%f", &salaryHour);
  printf("provide number of hours\n");
  scanf("%d", &hours);
  float salary;
  salary = salaryHour * hours;
  printf("employee salary %.2f\n", salary);
}
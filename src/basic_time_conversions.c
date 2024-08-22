#include <stdio.h>
// time to drive
void time_to_drive() {
  printf("calculating estimated time to drive: \n");
  float distance;
  float speed;
  printf("enter distance in km/miles: \n");
  scanf("%f", &distance);
  printf("enter speed km/h or miles/h: \n");
  scanf("%f", &speed);
  int time;
  time = distance / speed * 60;

  int timeHours = (time / 60);
  int timeMinutes = (time % 60);

  printf("time to drive in hours %d and  minutes %d\n", timeHours, timeMinutes);
}

void convertToHoursMinutesSeconds() {
  printf("convert seconds to hours, minutes and seconds");
  int seconds;
  printf("enter value of seconds: \n");
  scanf("%d", &seconds);
  int hours = seconds / 3600;
  int minutes = (seconds % 3600) / 60;
  int seconds2 = (seconds % 3600) % 60;
  printf("hours %d, minutes %d, seconds %d\n", hours, minutes, seconds2);
}

void convertToSeconds() {
  printf("convert hours, minutes and seconds to seconds");
  int hours, minutes, seconds;
  printf("enter value of hours: \n");
  scanf("%d", &hours);
  printf("enter value of minutes: \n");
  scanf("%d", &minutes);
  printf("enter value of seconds: \n");
  scanf("%d", &seconds);
  int totalSeconds = hours * 3600 + minutes * 60 + seconds;
  printf("total seconds %d\n", totalSeconds);
}
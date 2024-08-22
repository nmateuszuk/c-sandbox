#include "all.h"
#include <math.h>;
#include <stdio.h>
#include <stdlib.h>

void swap(int num1, int num2) {
  int temp;

  temp = num1;
  num1 = num2;
  num2 = temp;
}

void swapPointer(int *num1, int *num2) {
  int temp;

  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

void printGreeting() { printf("Hello! \n"); }

int main() {
  hello_world();
  // printf_formatting();
  // basic_calculator();
  // loops();
  //  scanf_example1();
  //  scanf_example2();
  //  arithmetical_progression();
  //  sequence_sum();
  //  salary_calculation();
  // simple_pointers_example();
  // pointers_grades_example();
  // pointers_example_2();

  printf("---------------------------\n");
  int arrPalindorme[5] = {1, 2, 3, 2, 1};
  int arrPalindormeSize = 5;

  int isPalindorme = palindrome(arrPalindorme, arrPalindormeSize);

  if (isPalindorme == 0) {
    printf("is not a palindrome\n");
  } else if (isPalindorme == 1) {
    printf("is a palindrome\n");
  }

  printf("---------------------------\n");
  int a = 6, b = 8;
  int min, max;
  findMinMax(a, b, &max, &min);
  printf("max is %d, min is %d \n", max, min);
  printf("---------------------------\n");

  int array1[5] = {1, 4, 3, 7, 1};
  int array2[5] = {5, 7, 1, 5, 2};
  int sunNeighbors = largestSum(array1);
  printf("largest neighbors sum is= %d\n", sunNeighbors);
  printf("---------------------------\n");

  // example why passing by value wont work and we need to pass by reference
  int num1 = 1, num2 = 7;
  printf("num1= %d, num2= %d \n", num1, num2);
  printf("Element num1 adress = %lu\n", &num1);
  printf("Element num2 adress = %lu\n", &num2);
  swap(num1, num2);
  printf("num1= %d, num2= %d \n", num1, num2);
  printf("Element num1 adress = %lu\n", &num1);
  printf("Element num2 adress = %lu\n", &num2);
  // pass by reference
  swapPointer(&num1, &num2);
  printf("num1= %d, num2= %d \n", num1, num2);
  printf("Element num1 adress = %lu\n", &num1);
  printf("Element num2 adress = %lu\n", &num2);
  printf("\n---------------------------\n");
  // write a program to check if sorted

  int array3[5] = {1, 2, 5, 7, 10};
  int array4[5] = {1, 2, 2, 7, 10};

  int array5[5] = {1, 6, 5, 2, 10};
  int array6[5] = {10, 6, 13, 2, 1};

  const char *resultOrder = checkArrayOrder(array4, 5);
  printf("%s\n", resultOrder);
  printf("\n---------------------------\n");
  //-------------------------------------
  // piramid
  int rows = 10;
  printPyramid(rows);

  printf("\n---------------------------\n");
  //-------------------------------------

  int arrayToCheck[9] = {1, 3, 5, 6, 7, 6, 3, 8, 8};

  int size = sizeof(arrayToCheck) / sizeof(arrayToCheck[0]);

  int nonUniqeCounter = 0;

  int nonUniqueArray[9];
  int nonUniqueCounter = 0;

  for (int i = 0; i < size; i++) {
    int isDuplicate = 0;
    for (int j = 0; j < size; j++) {
      if (i != j && arrayToCheck[i] == arrayToCheck[j]) {
        isDuplicate = 1;
        break;
      }
    }
    if (isDuplicate) {
      // Check if the element is already in nonUniqueArray
      int alreadyAdded = 0;
      for (int k = 0; k < nonUniqueCounter; k++) {
        if (nonUniqueArray[k] == arrayToCheck[i]) {
          alreadyAdded = 1;
          break;
        }
      }
      if (!alreadyAdded) {
        nonUniqueArray[nonUniqueCounter] = arrayToCheck[i];
        nonUniqueCounter++;
      }
    }
  }

  // Print non-unique elements
  printf("Non-unique elements: ");
  for (int i = 0; i < nonUniqueCounter; i++) {
    printf("%d ", nonUniqueArray[i]);
  }
  printf("\n");

  //-------------------

  printf("\n---------------------------\n");
  int arayToShift[] = {5, 4, 7, 3};
  int shift = 2;
  int sizeOfArayToShift = 4;
  rotate_array_n(arayToShift, shift, sizeOfArayToShift);
  rotate_array_right(arayToShift, 1, sizeOfArayToShift);

  printf("\n");

#define SIZE 5

  // int runs() {

  // time to drive

  // float distance;
  // float speed;
  // scanf("%f", &distance);
  // scanf("%f", &speed);
  // int time;
  // time = distance / speed * 60;

  // int timeHours = (time / 60);
  // int timeMinutes = (time % 60);

  // printf("time to drive in hours %d and  minutes %d\n", timeHours,
  // timeMinutes);

  //-------------------------------------
  // convert seconds to hours, minutes and seconds
  // int seconds;
  // scanf("%d", &seconds);
  // int hours = seconds / 3600;
  // int minutes = (seconds % 3600) / 60;
  // int seconds2 = (seconds % 3600) % 60;
  // printf("hours %d, minutes %d, seconds %d\n", hours, minutes, seconds2);

  //-------------------------------------
  // convert hours, minutes and seconds to seconds
  // int hours, minutes, seconds;
  // scanf("%d", &hours);
  // scanf("%d", &minutes);
  // scanf("%d", &seconds);
  // int totalSeconds = hours * 3600 + minutes * 60 + seconds;
  // printf("total seconds %d\n", totalSeconds);

  //-------------------------------------
  // float a = 12.7;
  // int b = (int)a;
  // float d = a - b;
  // printf("b=%.1f\n", d);

  //-------------------------------------
  // sum of triple digits
  // int n;
  // scanf("%d", &n);
  // int sum = 0;
  // int a = n / 100;
  // int b = (n % 100) / 10;
  // int c = n % 10;
  // sum = a + b + c;
  // printf("sum of triple digits %d\n", sum);

  // printf("number %d\n", n % 10);
  // printf("number %d\n", n % 100 / 10);
  // printf("number %d\n", n / 100);

  //-------------------------------------
  // print reverse number
  // int n;
  // scanf("%d", &n);
  // int units = n % 10;
  // int tens = n % 100 / 10;
  // int hundreds = n / 100;

  // printf("reverse number %d%d%d\n", units, tens, hundreds);

  // int reverse = units * 100 + tens * 10 + hundreds;
  // printf("reverse number %d\n", reverse);

  //---------------------------------------

  // float x1, x2, y1, y2;
  // x1 = 1;
  // x2 = 4;
  // y1 = 3;
  // y2 = 7;

  // float a = x1 - x2;
  // float b = y1 - y2;

  // float distance = sqrt(a * a + b * b);
  // printf("distance is %f \n", distance);
  // double x;
  // scanf("%lf", &x);
  // printf("power of x stage 2 %f\n", pow(x, 2.0));
  // printf("power of x stage 2 %f\n", pow(x, 4.0));
  // printf("power of x stage 2 %f\n", pow(x, 6.0));
  // printf("power of x stage 2 %f\n", pow(x, 8.0));

  // int score;
  // printf("input your score 0-100 \n");
  // scanf("%d", &score);
  // if (score >= 60) {
  //   printf("congratulations! passed!\n");
  // } else {
  //   printf("failed, try again!\n");
  // }

  // int number1, number2;
  // printf("input two numbers \n");
  // scanf("%d %d", &number1, &number2);
  // printf("max is %d \n", (int)fmax(number1, number2));
  // printf("max is %d \n", (number1 > number2) ? number1 : number2);

  // int number1;
  // printf("input number \n");
  // scanf("%d", &number1);
  // if (number1 % 2 == 0) {
  //   printf("even number \n");
  // } else {
  //   printf("number is odd\n");
  // }

  // char grade;
  // printf("Enter your grade (A-F):\n");
  // scanf("%c", &grade);
  // switch (grade) {
  // case 'A':
  //   printf("grade between 90-100\n");
  //   break;

  // case 'B':
  //   printf("grade between 80-89\n");
  //   break;

  // case 'C':
  //   printf("grade between 70-79\n");
  //   break;

  // case 'D':
  //   printf("grade between 60-69\n");
  //   break;

  // case 'E':
  //   printf("grade between 50-59\n");
  //   break;

  // case 'F':
  //   printf("grade between 0-49\n");
  //   break;
  // default:
  //   printf("Error!\n");
  // }

  // char myChar = 'a';
  // printf("character: %c\n", myChar);
  // printf("character in decimal ascii code: %d\n", myChar);
  // printf("character in hexadecimal ascii code: %X\n", myChar);

  // print in hexadecimal
  // int day, month, year;

  // printf("enter day\n");
  // scanf("%d", &day);
  // printf("enter month\n");
  // scanf("%d", &month);
  // printf("enter year\n");
  // scanf("%d", &year);

  // printf("Day: 0x%X\n", day);
  // printf("Day: 0x%X\n", month);
  // printf("Day: 0x%X \n", year);

  // char myCharacter;
  // printf("enter character\n");
  // scanf("%c", &myCharacter);

  // if (myCharacter >= 'A' && myCharacter <= 'Z') {
  //   printf("upper case character\n");
  // }
  // if (myCharacter >= 'a' && myCharacter <= 'z') {
  //   printf("lower case character\n");
  // }
  // if (myCharacter >= '0' && myCharacter <= '9') {
  //   printf("digit\n");
  // } else
  //   printf("other\n");

  // char hexChar;
  // printf("Enter a hexadecimal value (one digit): ");
  // scanf("%c", &hexChar);
  // switch (hexChar)
  // {
  // case '0':
  // 	printf("0000");
  // 	break;
  // case '1':
  // 	printf("0001");
  // 	break;
  // case '2':
  // 	printf("0010");
  // 	break;
  // case '3':
  // 	printf("0011");
  // 	break;
  // case '4':
  // 	printf("0100");
  // 	break;
  // case '5':
  // 	printf("0101");
  // 	break;
  // case '6':
  // 	printf("0110");
  // 	break;
  // case '7':
  // 	printf("0111");
  // 	break;
  // case '8':
  // 	printf("1000");
  // 	break;
  // case '9':
  // 	printf("1001");
  // 	break;
  // case 'A':
  // 	printf("1010");
  // 	break;
  // case 'B':
  // 	printf("1011");
  // 	break;
  // case 'C':
  // 	printf("1100");
  // 	break;
  // case 'D':
  // 	printf("1101");
  // 	break;
  // case 'E':
  // 	printf("1110");
  // 	break;
  // case 'F':
  // 	printf("1111");
  // 	break;
  // default:
  // 	printf("Seems you inserted something not as expected... Please try again
  // next time..\n");

  // int count = 0;
  // while (count < 10) {
  //   printf("*");
  //   count++;
  // }
  // printf("\n");

  // int num = 2;
  // int pow = 3;
  // int result = 1;
  // int i = 0;
  // while (pow > 0) {
  //   result = result * num;
  //   pow--;
  // }
  // printf("result %d\n", result);
  //------------------------------
  // int num2 = 2;
  // int pow2 = 3;
  // int result2 = 1;

  // for (int i = 0; i < pow2; i++) {
  //   result2 = result2 * num2;
  // }
  // printf("result %d\n", result2);
  //------------------------------
  // int n = 10;
  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= i; j++) {
  //     printf("%d", j);
  //   }

  //   printf("\n");
  // }

  //------------------------------

  // int n = 9;
  // for (int i = 1; i <= n; i++) {
  //   for (int j = 1; j <= i; j++) {
  //     printf("%d", i);
  //   }

  //   printf("\n");
  // }

  //------------------------------

  // int num = 10;

  // for (int i = 1; i <= num; i++) {
  //   printf("%d,", i);
  // }
  // printf("\n");
  // for (int j = num; j >= 1; j--) {
  //   printf("%d,", j);
  // }
  // printf("\n");
  // printf("");
  //---------------------------------
  // int num = 10;
  // int sum = 0;

  // for (int i = 1; i <= num; i++) {
  //   printf("%d,", i);
  //   sum = sum + i;
  // }
  // printf("\nsum= %d\n", sum);

  //---------------------------------
  // int num = 3;
  // int sum = 0;

  // for (int i = 1; i <= 10; i++) {
  //   printf("%d * %d = %d \n", num, i, num * i);
  // }

  //--------------------------------

  //-------------------------

  // int my2DArray[2][3] = {{1, 2, 3}, {4, 5, 7}};
  // for (int i = 0; i < 2; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     printf("%d", my2DArray[i][j]);
  //   }
  //   printf("\n");
  // }
  //-------------------------

  // int mat[SIZE][SIZE];

  // // fill values in the table
  // for (int i = 1; i < SIZE; i++) {
  //   for (int j = 1; j < SIZE; j++) {
  //     mat[i][j] = i * j;
  //   }
  // }

  // for (int i = 1; i < SIZE; i++) {
  //   for (int j = 1; j < SIZE; j++) {
  //     printf("%5d ", mat[i][j]);
  //   }
  //   printf("\n");
  // }
  //-------------------------

  //     return 0;
  //   }
}

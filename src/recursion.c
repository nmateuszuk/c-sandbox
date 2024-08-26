// 1+2+3+..+ num-1 +num

#include <stdio.h>
#include <string.h>
int sumUpTo(int num) {
  if (num == 1)
    return 1;
  return num + sumUpTo(num - 1);
}

int factorial(int num) {
  if (num <= 1)
    return 1;
  return num * factorial(num - 1);
}

// fibonacci
// F0=0;
// F1=1;
// F2=F1+F0
// F3=F2+F1
// Fn=Fn-1+ Fn-2

int fibonacci(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumOfDigits(int num) {
  if (num <= 9)
    return num;
  return num % 10 + sumOfDigits(num / 10);
}

// num =213-->3
// countDigitis ==> 1+countDigits(21)==>....
int countDigits(int num) {
  if (num <= 9)
    return 1;
  return 1 + countDigits(num / 10);
}

// take input from user until user type in -1, count amount of inputs smaller
// tham given num
int totalSmallerThanGivenNum(int num) {

  int inputUser;
  printf("Please enter a number:");
  scanf("%d", &inputUser);
  if (inputUser == -1)
    return 0;
  if (inputUser < num)
    return 1 + totalSmallerThanGivenNum(num);
  return totalSmallerThanGivenNum(num);
}

// number of apperance of given character
int totalInputedCharacters(char charcter) {
  char inputUser;
  printf("Please enter a chracter:");
  scanf("%c", &inputUser);
  if (inputUser == '$')
    return 0;
  if (inputUser == charcter)
    return 1 + totalInputedCharacters(charcter);
  return totalInputedCharacters(charcter);
}

int totalNumberOfEven() {
  int inputUser;
  printf("Please enter a number:");
  scanf("%d", &inputUser);

  if (inputUser == -1)
    return 0;
  if (inputUser % 2 == 0)
    return 1 + totalNumberOfEven();
  return totalNumberOfEven();
}

int totalSumOfEven() {
  int inputUser;
  printf("Please enter a number:");
  scanf("%d", &inputUser);

  if (inputUser == -1)
    return 0;
  if (inputUser % 2 == 0)
    return inputUser + totalSumOfEven();
  return totalSumOfEven();
}

void print1ToN(int n) {
  if (n >= 1) {

    print1ToN(n - 1);
    printf("%d", n);
  }
}

void printNTo1(int n) {
  if (n >= 1) {

    printNTo1(n - 1);
    printf("%d", n);
  }
}

void printNTo1AndBack(int n) {
  if (n == 1) {
    printf("%d", n);
  } else {
    printf("%d", n);
    printNTo1AndBack(n - 1);
    printf("%d", n);
  }
}

int lucasNumbers(int n) {
  if (n == 0)
    return 2;
  if (n == 1)
    return 1;
  return lucasNumbers(n - 1) + lucasNumbers(n - 2);
}

int findMaxRecursive(int num) {
  int inputUser;

  int maxValue;
  printf("Please enter a number:");
  scanf("%d", &inputUser);

  if (num > 1) {
    maxValue = findMaxRecursive(num - 1);
    if (inputUser > maxValue)
      return inputUser;
    else
      return maxValue;
    ;
  }
  return inputUser;
}

int findMinRecursive(int n) {
  int inputUser;
  int minValue;

  printf("Enter value:");
  scanf("%d", &inputUser);

  if (n > 1) {
    minValue = findMinRecursive(n - 1);
    if (inputUser < minValue) {
      return inputUser;
    } else
      return minValue;
  }
  return inputUser;
}

// pell number
int pellNumberRecursive(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return 2 * pellNumberRecursive(n - 1) + pellNumberRecursive(n - 2);
}

void printTotalOfNums(int total, int num1, int num2) {

  if (total >= 1) {
    printf("%d", num1);
    printTotalOfNums(total - 1, num1, num2);
    printf("%d", num2);
  }
}

void printTotalOfChars(int total, char c1, char c2) {

  if (total >= 1) {
    printf("%c", c1);
    printTotalOfChars(total - 1, c1, c2);
    printf("%c", c2);
    // printf("%c", c2);
  }
}

void printTotalOfCharsUppercase(int total, char c1) {

  if (total >= 1) {
    printf("%c", c1);
    printTotalOfCharsUppercase(total - 1, c1);
    printf("%c", c1 - 'a' + 'A');
  }
}

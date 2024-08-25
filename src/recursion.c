// 1+2+3+..+ num-1 +num
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

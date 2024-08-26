union firstUnion {
  char unionName[20]; // 20 bytes
  int age;            // 4 bytes
};
// it will only take 20 bytes of memory - allows to store different data types
// in the same memory location

union minMax {
  int max;
  int min;
  int avrage;
};

union minMax numbers;

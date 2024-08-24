// Structs having arrays as data members

#include <stdio.h>
#include <string.h>
typedef struct employee {
  char name[10];
  int age;
  int id;
} Employee;

void copyingStruct() {
  Employee emp2 = {"Nana", 26, 123};
  Employee emp1;

  // using the "=" to copy value-by-value (the members of one struct variable to
  // another of the same type) note: copying static arrays in assigment between
  // two structs variables is a bit different than "simply" copying the array
  // (element by element)

  emp1 = emp2;

  printf("Employee #1 name is %s\n", emp1.name);
  printf("Employee #2 name is %s\n", emp2.name);

  // making sure that these are a full copies (and not just referring to same
  // place)
  strcpy(emp1.name, "John");
  emp1.id = 455;
}
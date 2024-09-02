#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// #1 creating pointer to a file type
//   FILE *filePointer;

// #2 opening /access to a file ---> fopen(<filename>, <type_of_operation>)
//  'w' -writing
//'r' - reading
// 'a' -appending
//   filePointer = fopen();

// #3 if(fp!=NULL) - to make sure that the open operation was sucessfull

// #4 working with the file

// #5 close the stream
//   fclose(filePointer);

// wil crete file if doesnt exist or overwrite
void createFile() {
  FILE *filePointer;
  // filePointer = fopen(..//.../"myFirstFile.txt", "w");
  filePointer = fopen("myFirstFile.txt", "w");
  if (filePointer == NULL) {
    printf("file not found\n");
  } else {
    printf("file is open for writing\n");
    // write some code associated to file
    fclose(filePointer);
  }
}

void readFile() {
  FILE *filePointer;

  filePointer = fopen("myFirstFile6.txt", "r");
  if (filePointer == NULL) {
    printf("file not found\n");
  } else {
    printf("file is open for reading\n");
    fclose(filePointer);
  }
}

// fgetc(<poiter_to_file>) -> file get character
void fgetcExample() {
  FILE *filePointer;
  char myChar1;

  filePointer = fopen("myFirstFile5.txt", "r");
  if (filePointer == NULL) {
    printf("file not found\n");
  } else {
    printf("file is open for reading\n");
    myChar1 = fgetc(filePointer);
    printf("my char: %c\n", myChar1); // first character from file
    // fgetc(stdin);
    fclose(filePointer);
  }
}

// fputc(<character>, <pointer_to_a_file)
void fputcExample() {
  FILE *filePointer;

  filePointer = fopen("myFirstFile1.txt", "w");
  if (filePointer != NULL) {

    fputc('H', filePointer);
    fputc('i', filePointer);

    fclose(filePointer);
  }
  putchar('a'); // to stdout
}

// fprintf(<pointer_to_a_file>, placeholder, parameters) -- redirect flow of,
// can return numbers of bytes it has sucesfully written info to a pointed file
void printfExample() {
  FILE *filePointer;
  int num = 512;
  float num2 = 8.1;

  filePointer = fopen("myFirstFile2.txt", "w");
  if (filePointer != NULL) {

    fprintf(filePointer, "%d", num);
    // fprintf(filePointer, "%d %f", num, num2);
    // fprintf(stdout, "%d", num);
    fclose(filePointer);
  }
}

// fscanf(<pointer_to_a_file>, placeholder, parameters)- reads info from file
// and store it inside diffrent variable
void fscanfExample() {
  FILE *filePointer;
  int num = 512;

  filePointer = fopen("myFirstFile3.txt", "r");
  if (filePointer != NULL) {

    fscanf(filePointer, "%d", &num);
    // fscanf(stdin, "%d", &num);
    printf("num from file %d", num);
    fclose(filePointer);
  }
}

// fputs (<string>, <pointer_to_a_file>)
void fputsExample() {
  FILE *filePointer;

  puts("HI \n");
  filePointer = fopen("myFirstFile4.txt", "w");
  if (filePointer != NULL) {

    fputs("HI THERE!\n", filePointer);
    fclose(filePointer);
  }
}

// fgets (<string>,<int/lenght_limit>, <pointer_to_a_file>)
void fgetsExample() {
  FILE *filePointer;
  int count = 0;
  char myString[10];

  filePointer = fopen("myFirstFile4.txt", "r");
  if (filePointer != NULL) {

    while (fgets("HI THERE!\n", 10, filePointer)) {
      printf("string #%d read: %s \n", ++count, myString);
    }

    fclose(filePointer);
  }
}

// EOF - end of file
// while(!feof(filepointer))

// count number of character in file
void countCharacters() {
  char myChar;
  FILE *filePointer;
  int count = 0;

  filePointer = fopen("myFirstFile4.txt", "r");
  if (filePointer != NULL) {

    while ((myChar = fgetc(filePointer)) != EOF) {
      printf("string %c", myChar);
      count++;
    }
    printf("number of characters %d", count);
    fclose(filePointer);
  }
}

// count number of character in file
void countLines() {
  char myChar;
  FILE *filePointer;
  int countLines = 0;

  filePointer = fopen("myFirstFile4.txt", "r");
  if (filePointer != NULL) {

    while ((myChar = fgetc(filePointer)) != EOF) {
      if (myChar == '\n')
        countLines++;
    }
    printf("number of lines %d", countLines);
    fclose(filePointer);
  }
}

// writing numbers and their powers to file

void powersToFile() {
  FILE *filePointer;
  filePointer = fopen("powers.txt", "w");

  if (filePointer != NULL) {
    for (int i = 0; i <= 100; i++) {
      fprintf(filePointer, "%d %d \n", i, i * i);
    }
    fclose(filePointer);
  }
}

// reading numbers from file

void readNumbers() {
  FILE *filePointer;
  int num1, num2;

  filePointer = fopen("myFirstFile3.txt", "r");
  if (filePointer != NULL) {

    for (int i = 0; i <= 10; i++) {

      fscanf(filePointer, "%d%d", &num1, &num2);
      printf("num from file %d %d", num1, num2);
    }

    fclose(filePointer);
  }
}

// count characters occurance
void countGivenCharacter() {
  char givenCharacter;
  char fileName[20] = {0};
  FILE *filePointer;
  int counter = 0;

  printf("Enter a file name to test\n");
  scanf("%s", &fileName);

  printf("Enter a character\n");
  scanf("%s", &givenCharacter);
  filePointer = fopen(fileName, "r");
  if (filePointer != NULL) {
    while (!feof(filePointer)) {
      if (fgetc(filePointer) == givenCharacter) {
        counter++;
      }
    }
  }
  printf("total: %d\n", counter);
}

void countCharacters2() {
  char currentChar;
  FILE *filePointer;
  char fileName[20] = {0};
  int frequencyArray[26];
  int maxIndex = 0;

  printf("Enter a file name to test\n");
  scanf("%s", &fileName);

  filePointer = fopen("myFirstFile4.txt", "r");
  if (filePointer != NULL) {

    while (!feof(filePointer)) {
      currentChar = fgetc(filePointer);
      if (currentChar >= 'a' && currentChar <= 'z') {
        frequencyArray[currentChar - 'a']++;
      }
    }
  }
  for (int i = 0; i < 26; i++) {
    printf("number of characters %c is %d\n", i + 'a', frequencyArray[i]);

    if (frequencyArray[maxIndex] < frequencyArray[i]) {
      maxIndex = i;
    }
  }
  printf("max apperance of %c is %d\n", maxIndex + 'a',
         frequencyArray[maxIndex]);

  fclose(filePointer);
}

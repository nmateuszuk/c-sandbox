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
  int count;
  char myString[10];

  filePointer = fopen("myFirstFile4.txt", "r");
  if (filePointer != NULL) {

    while (fgets("HI THERE!\n", 10, filePointer)) {
      printf("string #%d read: %s \n", ++count, myString);
    }

    fclose(filePointer);
  }
}
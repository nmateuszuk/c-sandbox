#include <stdio.h>
#include <string.h>

void stringInitialization() {
  char charsArray[] = {'H', 'e', 'l', 'l', 'o'};
  char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
  char str2[] = "Hello";
  char password[10] = "123456789";
}

// printf("%s",fullName);
void printString() {
  char fullName[] = "natalia merynda";
  int i = 0;
  while (fullName[i] != "\0") {
    printf("%c", fullName[i]);
    i++;
  }
}

//"gets"-reads text INCLUDING STORES vs "scanf" -reads only the first word (NO
// SPACES)

//"puts" -appends a new line vs "printf"-allows further formating (printf("my
// name %c", name))

void stringLenght() {
  char fullName[] = "natalia merynda";
  int i = 0;
  while (fullName[i] != "\0") {
    i++;
  }
  printf("string lenght %d \n", i);
}

void countWordsInSentence() {
  char sentence[200];
  int counter = 0, i;

  printf("Enter a sentence: ");
  fgets(sentence, 200, stdin);

  for (i = 0; sentence[i] != '\0'; i++) {

    if (sentence[i] == ' ' && sentence[i + 1] != ' ' &&
        sentence[i + 1] != '\0') {
      counter++;
    }
  }
  counter++;

  printf("The number of words in sentence is: %d\n", counter);
}

void isPalindorme(char str5[]) {

  int length = strlen(str5);
  printf("%d\n", length);
  int flagPalindrome = 1;

  for (int i = 0; i < length / 2; i++) {
    if (str5[i] != str5[length - i - 1]) {
      flagPalindrome = 0;
      break;
    }
  }

  if (flagPalindrome == 1) {
    printf("%s is palindorme \n", str5);
  } else {
    printf("%s is NOT palindorme \n", str5);
  }
}
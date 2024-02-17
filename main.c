#include <stdio.h>

int calculateNumber(int number);
void checkForPerfection(int number);

// Define number globally so it can be used in local scopes!
int number = 8128;

int main(void) {
  int total = 0;

  total = calculateNumber(number);
  checkForPerfection(total);
  
  return 0;
}

int calculateNumber(int number) {
  int numberList[10000];
  int arrayPosition = 0;
  int total = 0;
  int i;

  for (i = 1; i < number; i++) {
    if (number % i == 0) {
      numberList[arrayPosition] = i;
      total += i;
      arrayPosition++;
    }
  }

  return total;
}

void checkForPerfection(int total) {
  if (total == number) {
    printf("Input: %d\n\nPerfect Number.", number);
  }
  else {
    printf("Input: %d\n\nNot A Perfect Number.", number);
  }
}
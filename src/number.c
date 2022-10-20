#include <stdlib.h>
#include <stdio.h>
#include "number.h"


int IntLength(int number) {
  int length = 0;

  do {
    length++;
    number = number / 10;
  } while(number != 0);

  return length;
}


char* Int2String(void* pointer) {
  int* number = (int*)pointer;
  char* string = malloc(IntLength(*number) * sizeof(int));
  sprintf(string, "%d", *number);
  return string;
}


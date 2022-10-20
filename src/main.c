#include <stdio.h>
#include "mmath.h"

#define ARR_SIZE 8


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


int main(void) {

  LinkedList list = {
    .root = (LinkedListItem*)0,
    .length = 0,
  };

  int arr[ARR_SIZE] = { 1, 2, 3, 4, 4, 4, 5, 9 };

  for (int i = 0; i < ARR_SIZE; i++) {
    PushItem(&list, &arr[i], sizeof(int));
  }

  printf("Length: %d\n", list.length);

  PrintList(&list, Int2String, ", ");

  return OK;
}


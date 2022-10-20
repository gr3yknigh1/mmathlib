#include <stdio.h>
#include "mmath.h"

int main(void) {

  LinkedList list = {
    .root = (LinkedListItem*)0,
    .length = 0,
  };

  const int ARR_SIZE = 8;
  int* arr = malloc(sizeof(int) * ARR_SIZE);
  arr = (int[]){ 1, 2, 3, 4, 4, 4, 5, 9 };

  for (int i = 0; i < ARR_SIZE; i++) {
    PushItem(&list, &arr[i], sizeof(int));
  }

  printf("Length: %d\n", list.length);

  PrintList(&list, Int2String, ", ");

  return OK;
}


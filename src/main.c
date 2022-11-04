#include <stdio.h>
#include <stdbool.h>

#include "mmath.h"


void BadSwapInt(int x, int y) {
  int t = x;
  x = y;
  y = t;
}


void SwapInt(int* x, int* y) {
  int t = *x;
  *x = *y;
  *y = t;
}


void SwappingTest() {
  int x = 10;
  int y = 20;

  printf("x: %d; y: %d\n", x, y);

  BadSwapInt(x, y);
  printf("After bad swap\n");

  printf("x: %d; y: %d\n", x, y);

  SwapInt(&x, &y);
  printf("After proper swap\n");

  printf("x: %d; y: %d\n", x, y);
}


void PointerTest() {
  int* x = malloc(sizeof(int) * 2);
  x[0] = 10;
  x[1] = 20;
  printf("%d", *(x++));
}


const unsigned int StringLength(const char* string) {
  int length;
  for(length = 0; *string != '\0'; string++) {
    length++;
  }
  return length;
}


void Foo(int* x) { }


int main(void) {

  int array[4] = {1, 2, 3, 4};
  int* pointerArr = array;
  printf("%d", pointerArr[3]);


  return OK;
}


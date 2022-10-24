#include <stdlib.h>

#include "array.h"


IntArray CreateIntArray(uint length) {
  IntArray intArray = (IntArray) {
    .data   = malloc(sizeof(int) * length),
    .length = length
  };
  return intArray;
}

IntArray CreateIntArrayFrom(int* array, uint length) {
  IntArray intArray = CreateIntArray(length);
  for (int index = 0; index < length; index++) {
    intArray.data[index] = array[index];
  }
  return intArray;
}


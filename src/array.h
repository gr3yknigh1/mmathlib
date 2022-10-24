#ifndef ARRAY_H
#define ARRAY_H

#include "types.h"


typedef struct IntArray {
  int*   data;
  uint length;
} IntArray;

IntArray CreateIntArray(uint length);
IntArray CreateIntArrayFrom(int* array, uint length);


typedef struct FloatArray {
  float*   data;
  uint   length;
} FloatArray;

FloatArray* CreateFloatArray(uint length);
FloatArray* CreateFloatArrayFrom(int* array, uint length);


typedef struct UIntArray {
  uint*   data;
  uint  length;
} UIntArray;

UIntArray* CreateUIntArray(uint length);
UIntArray* CreateUIntArrayFrom(int* array, uint length);

#endif

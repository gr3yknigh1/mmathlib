#include <stdlib.h>
#include <memory.h>
#include <stdio.h>

#include "matrix.h"


#define STRING_BUFFER_SIZE 20


Matrix2 AllocateMatrix2(
  Vector2 shape,
  double* data
) {
  return (Matrix2) {
    .data = data,
    .shape = shape
  };
}


Matrix2 AllocateMatrix2E(Vector2 shape) {
  return AllocateMatrix2(
    shape,
    malloc(sizeof(double) * shape.x * shape.y)
  );
}


const int GetMatrix2ElementCount(const Matrix2 matrix) {
  return matrix.shape.x * matrix.shape.y;
}


const double GetMatrix2Element(const Matrix2 matrix, int x, int y) {
  if (x >= matrix.shape.x || y >= matrix.shape.y) {
    return 0;
  }

  const Vector2 shape = matrix.shape;
  const int index = shape.x * y + x;

  return matrix.data[index];
}


const double GetMatrix2ElementV(const Matrix2 matrix, Vector2 position) {
  return GetMatrix2Element(matrix, position.x, position.y);
}


char* Slice(char* origin, int from, int to) {
  char* output = malloc(sizeof(char) * (to + 1));
  int count = 0;
  for (int index=from; index < to; index++) {
    output[count] = origin[index];
    count++;
  }
  return output;
}


void PrintMatrix2C(
  const Matrix2 matrix,
  char separator,
  char lineEnd,
  char final
) {
  const int elementCount = matrix.shape.x * matrix.shape.y;

  char string[STRING_BUFFER_SIZE];

  for (int i=0; i < elementCount; i++) {
    const double element = matrix.data[i];

    printf("%.3lf%c", element, separator);

    if (((i + 1) % (int)matrix.shape.x) == 0) {
      printf("%c", lineEnd);
    }
  }
  printf("%c", final);
}

void PrintMatrix2(const Matrix2 matrix) {
  PrintMatrix2C(matrix, ' ', '\n', '\n');
}

void PrintMatrix2Element(const Matrix2 matrix, int x, int y) {
  printf(
    "[%d:%d]: %lf",
    x, y,
    GetMatrix2Element(matrix, x, y)
  );
}


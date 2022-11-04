#ifndef MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include "vector.h"


typedef struct Matrix2 {
  double* data;
  Vector2 shape;
} Matrix2;


typedef struct Matrix3 {
  double* data;
  Vector3 shape;
} Matrix3;


double DotProductM2(Matrix2 a, Matrix2 b);
double DotProductM3(Matrix3 a, Matrix3 b);

Matrix2 CreateMatrix2(Vector2 shape, double* data);
Matrix2 CreateMatrix2E(Vector2 shape);

const int GetMatrix2ElementCount(const Matrix2 matrix);

const double GetMatrix2Element(const Matrix2 matrix, int x, int y);
const double GetMatrix2ElementV(const Matrix2 matrix, Vector2 position);


void PrintMatrix2(const Matrix2 matrix);
void PrintMatrix2C(
  const Matrix2 matrix,
  char sepatator,
  char lineEnd,
  char final
);

void PrintMatrix2Element(const Matrix2 matrix, int x, int y);

#endif // MATRIX_H

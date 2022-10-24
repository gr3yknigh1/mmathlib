#ifndef MATRIX_H
#define MATRIX_H

#include "stdlib.h"


typedef struct Vector2 {
  double x;
  double y;
} Vector2;


typedef struct Vector3 {
  double x;
  double y;
  double z;
} Vector3;


double GetVector2Length(Vector2 vector);
double GetVector3Length(Vector3 vector);


typedef struct Matrix2 {
  double* data;
  Vector2 shape;
} Matrix2;


typedef struct Matrix3 {
  double* data;
  Vector3 shape;
} Matrix3;


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

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#include "vector.h"


double GetVector2Length(Vector2 vector) {
  return sqrt(vector.x * vector.x + vector.y * vector.y);
}


double GetVector3Length(Vector3 vector) {
  return sqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
}


Vector2 ScaleVector2(Vector2 vector, double scalar) {
  return (Vector2) {
    .x = vector.x * scalar,
    .y = vector.y * scalar,
  };
}


Vector2 DivideVector2(Vector2 vector, double divider) {
  return ScaleVector2(vector, 1 / divider);
}


Vector2 NormalizeVector2(Vector2 vector) {
  double length = GetVector2Length(vector);
  return DivideVector2(vector, length);
}


Vector2 OpositeVector2(Vector2 vector) {
  return (Vector2) {
    -vector.x,
    -vector.y,
  };
}


double Vector2Angle(Vector2 vector) {
  return atan(vector.y / vector.x);
}


bool IsEqualVector2(Vector2 a, Vector2 b) {
  return a.x == b.x && a.y == b.y;
}


bool IsEqualVector3(Vector3 a, Vector3 b);


Vector2 AddVector2(Vector2 a, Vector2 b) {
  return (Vector2) {
    a.x + b.x,
    a.y + b.y,
  };
}

Vector2 SubstractVector2(Vector2 a, Vector2 b) {
  return AddVector2(a, OpositeVector2(b));
}

Vector2 ScalarMultiplyV2(Vector2 vector, double scalar) {
  double length = GetVector2Length(vector);
  double scaledLength = length * scalar;
  double angle = Vector2Angle(vector);
  return vector;
}


// @TODO Ask about Vector2 multiplication
Vector2 MultiplyVector2(Vector2 vectorA, Vector2 vectorB);


Vector3 MultiplyVector3(Vector3 a, Vector3 b) {
  return (Vector3) {
    .x = a.y * b.z - a.z * b.y,
    .y = a.z * b.x - a.x * b.z,
    .z = a.x * b.y - a.y * b.x,
  };
}


double DotProductV2(Vector2 a, Vector2 b);
double DotProductV3(Vector3 a, Vector3 b);


void PrintV2(const Vector2 vector) {
  printf("{ %lf, %lf }\n", vector.x, vector.y);
}


void PrintV3(const Vector3 vector) {
  printf("{ %lf, %lf, %lf }\n", vector.x, vector.y, vector.z);
}


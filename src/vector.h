#ifndef VECTOR_H
#define VECTOR_H

#include <stdbool.h>


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


Vector2 ScaleVector2(Vector2 vector, double modifier);
Vector2 DivideVector2(Vector2 vector, double divider);


Vector2 NormalizeVector2(Vector2 vector);
Vector2 OpositeVector2(Vector2 vector);
double Vector2Angle(Vector2 vector);


Vector2 AddVector2(Vector2 a, Vector2 b);
Vector2 SubstractVector2(Vector2 a, Vector2 b);


bool IsEqualVector2(Vector2 a, Vector2 b);
bool IsEqualVector3(Vector3 a, Vector3 b);


bool IsSameV2(Vector2 a, Vector2 b);



double AngleBetweenV2(Vector2 a, Vector2 b);
double AngleBetweenV3(Vector3 a, Vector3 b);


Vector2 MultiplyVector2(Vector2 vectorA, Vector2 vectorB);
Vector3 MultiplyVector3(Vector3 vectorA, Vector3 vectorB);


double DotProductV2(Vector2 a, Vector2 b);
double DotProductV3(Vector3 a, Vector3 b);


void PrintV2(const Vector2 vector);
void PrintV3(const Vector3 vector);


#endif // VECTOR_H

#include "matrix.h"
#include <stdio.h>
#include <stdbool.h>

#include <mmath.h>


int main(void) {

  Vector3 vector = (Vector3) { 1, -3, -3 };
  printf("%lf\n", GetVector3Length(vector));

  return OK;
}


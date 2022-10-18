#include <stdio.h>
#include "matrix.h"

int main() {

  Matrix2 matrix = CreateMatrix2(
    (Vector2){ 4, 3 },
    (double[]){
      3, 7, 9, 4,
      4, 0, 2, 1,
      2, 3, 4, 0
   }
  );

  PrintMatrix2(matrix);

  for (int y=0; y < matrix.shape.y; y++) {
    for (int x=0; x < matrix.shape.x; x++) {
      PrintMatrix2Element(matrix, x, y);
      printf(" ");
    }
    printf("\n");
  }

  return 0;
}


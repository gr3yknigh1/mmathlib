#include <stdio.h>
#include "matrix.h"

int main() {

  // Matrix2 matrix = AllocateMatrix2(
  //   (Vector2){ 4, 3 },
  //   (double[]){
  //     3, 7, 9, 4,
  //     4, 0, 2, 1,
  //     2, 3, 4, 0
  //  }
  // );
  //
  // PrintMatrix2(matrix);
  //
  // for (int y=0; y < matrix.shape.y; y++) {
  //   for (int x=0; x < matrix.shape.x; x++) {
  //     PrintMatrix2Element(matrix, x, y);
  //     printf(" ");
  //   }
  //   printf("\n");
  // }

  Matrix2 matrix = AllocateMatrix2(
    (Vector2){2, 2},
    malloc(sizeof(double) * 4)
  );

  matrix.data[0] = 1;
  printf("%lf\n", matrix.data[0]);
  free(matrix.data);
  printf("%lf\n", matrix.data[0]);

  // Matrix2 matrix = AllocateMatrix2(
  //   (Vector2){2, 2},
  //   (double[]) {1, 2, 3, 4}
  // );
  // matrix.data[0] = 1;
  // printf("%lf\n", matrix.data[0]);
  // free(matrix.data);
  // printf("%lf\n", matrix.data[0]);

  return 0;
}


// todo vetor, internamente representa um ponteiro!

#include <stdio.h>

int main() {
  int vet[10];            // representação interna: (int *)
  int mat[5][5];          // representação interna: (int *)[5]
  float array3D[4][2][5]; // representação interna: (float *)[2][5]
 
  return 0;

}
#include <stdio.h>

int main() {
  int vet[50] = {4, 6, 3, 8, 2, 5, 9, 1};
  int *p = vet;
  for (int i = 0; i < 8; i++) {
  printf("\tvet[%d]: %d\n", i, *(p+i));
  }
  return 0;
}
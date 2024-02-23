#include <stdio.h>

int main() {
  int numero;
  int *p;
  p = &numero;

  *p = 5;
    
  printf("&p: %p\n", &p);
  printf("&numero: %p\n", &numero);
  printf("p: %p\n", p);
  printf("numero: %d\n", numero);
  printf("*p: %d\n", *p);

  return 0;
}
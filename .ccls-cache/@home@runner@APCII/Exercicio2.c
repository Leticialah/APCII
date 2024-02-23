#include <stdio.h>

int main() {
  int numero;
  int *p;
  p = &numero;

  *p = 5;
    
  printf("&p: %p\n", &p);
  printf("&i: %p\n", &i);
  printf("p: %p\n", p);
  printf("i: %d\n", i);
  printf("*p: %d\n", *p);

  return 0;
}
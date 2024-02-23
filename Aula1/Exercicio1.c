#include <stdio.h>

int main() {
  int i;
  printf("Insira um valor para i: ");
  scanf("%d", &i);

  int *p;
  p = &i;
  printf("&p: %p\n", &p);
  printf("&i: %p\n", &i);
  printf("p: %p\n", p);
  printf("i: %d\n", i);
  printf("*p: %d\n", *p);

  return 0;
}
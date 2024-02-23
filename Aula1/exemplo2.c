#include <stdio.h>

int main() {

  int i = 5;
  int *p;
  p = &i;
  
  printf("&p: %p (p: %p)\n", &p, p);
  printf("&i: %p  (i: %d)\n", &i, i);
  printf("p: %p (*p: %d)\n", p, *p);
  
  *p = 7;
  printf("&i: %p  (i: %d)\n", &i, i);
  printf("p: %p (*p: %d)\n", p, *p);

 return 0;
}
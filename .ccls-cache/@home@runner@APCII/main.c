#include <stdio.h>

int main() {
  int x = 5;
  float pi = 3.14159;
  int *ptr_x = &x; // int *ptr_x = &x;
  float *ptr_pi = &pi; // int *ptr_pi = &pi;
  printf("&x: %d (&x: %p)\n", x, &x);
  printf("ptr_x: %p (*ptr_x: %d)\n", ptr_x, *ptr_x);
  printf("%pi: %f (pi: %p)\n", pi, *ptr_pi);
  printf("ptr_pi: %p (*ptr_pi: %f)\n", ptr_pi, *ptr_pi);
  
  return 0;
}
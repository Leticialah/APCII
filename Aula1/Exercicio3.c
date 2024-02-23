#include <stdio.h> 

int main() {
  int n1 = 3, n2 = 5;
  int *p1, *p2;
  p1 = &n1;
  p2 = &n2;

  //troca de valores fazendo uso de uma váriavel temporária
  int temporaria = *p1;
  *p1 = *p2;
  *p2 = temporaria;
  
  printf("n1: %d, n2: %d\n", n1, n2);
  
}
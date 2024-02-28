#include <stdio.h>

// Seja int *p = 0x104; onde cada inteiro requer 4 bytes de endereçamento em memória,
// - p++, ou p = p + 1, atribui o endereço 0x108 à p. (recebe o valor de UM inteiro em bytes, ou seja = 4 bytes... depende do caractere).
// - p--, ou p = p - 1, atribui o endereço 0x100 à p.

int main() {

  // Atividade 1
  // 1. Seja p = 0x200;, qual é o endereço (ou valor) obtido de p + 10 se:
  // a. se p for um ponteiro para inteiro (int *) de 2 bytes? p = 0x200; p = 0x200 + 20; p = 0x220;
  // b. se p for um ponteiro para inteiro (int *) de 4 bytes? p = 0x200; p = 0x200 + 40; p = 0x240;
  // c. se p for um ponteiro para caractere (char *) de 1 byte? p = 0x200; p = 0x200 + 10; p = 0x210;
  
  int rgba = 0x010203FF;
  unsigned char *c = (unsigned char *) &rgba;
  // a = FF
  printf("%x = %d\n", *c, *c);
  c++;
  // b = 03
  printf("%x = %d\n", *c, *c); 
  c++;
  // c = 02
  printf("%x = %d\n", *c, *c);
  c++;
  // d = 01
  printf("%x = %d\n", *c, *c);
  
  return 0;
  }
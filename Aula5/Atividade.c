// Algoritmo 1 (melhorado): Analisando a figura do Algoritmo 1, é possível identificar o tamanho da string sem a utilização de um contador (count). Reescreva o algoritmo, permitindo que o cumprimento da string seja encontrado utilizando apenas aritmética de ponteiros. 

#include <stdio.h>

int main() {
   char string[] = "Hello World";
   char *p = string;
   int count = 0;

   while (*p != '\0') {
      count++;
      p++;
   }

   printf("O número de caracteres na string é: %d\n", count);

   return 0;
}
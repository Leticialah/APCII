// 5. **Algoritmo 5**: **cópia de strings** Escreva um algoritmo em C, utilizando apenas ponteiros, que copie o conteúdo de uma string de origem para a string de destino.

#include <stdio.h>

void copString(char *destino, const char *origem) {
   
    while (*origem != '\0') {
        *destino = *origem;
        destino++;
        origem++;
    }
   
    *destino = '\0';
}

int main() {
    const char origem[] = "Hello World";
    char destino[50];

    copString(destino, origem);

    printf("String de destino após cópia: %s\n", destino);

    return 0;
}
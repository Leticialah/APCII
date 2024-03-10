#include <stdio.h>

int main() {
    char string[] = "Exercicio de APC II";
    char *p = string; 
    int tamanho = 0;

    while (*p != '\0') {
        tamanho++;
        p++;
    }

    tamanho = p - string;

    printf("O numero de caracteres na string é: %d\n", tamanho);

    return 0;
}
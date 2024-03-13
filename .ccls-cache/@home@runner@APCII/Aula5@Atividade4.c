// 4. **Algoritmo 4: Concatenação de string** Com base na ilustração a seguir, implemente em linguagem C a concatenação da string world à string hello utilizando apenas ponteiros.

#include <stdio.h>

int tamanhoString(const char *str) {

    int tamanho = 0;
    while (*str != '\0') {
        tamanho++;
        str++;
    }

    return tamanho;
}

void concatenarStrings(char *destino, const char *origem) {

    while (*destino != '\0') {
        destino++;
    }

    while (*origem != '\0') {
        *destino = *origem;
        destino++;
        origem++;
    }

    *destino = '\0';
}

int main() {

    char hello[10] = "hello";
    const char world[] = "world";

    printf("String hello antes da concatenação: %s\n", hello);
    printf("String world antes da concatenação: %s\n", world);

    concatenarStrings(hello, world);

    printf("String hello após a concatenação: %s\n", hello);

    return 0;
}

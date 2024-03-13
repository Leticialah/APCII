//2. **Algoritmo 2**: **Última ocorrência de vogal** Com base no algoritmo anterior, utilizando apenas ponteiros, escreva um algoritmo que percorra uma string, e retorne ao usuário o endereço de memória da última ocorrência de uma vogal. Caso a vogal não for encontrada, retorne **NULL**.

#include <stdio.h>

int main() {
    char string[] = "Hello World";
    char *p = string;
    char *ultima_vogal = NULL;

    while (*p != '\0') {
        switch (*p) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ultima_vogal = p; 
                break;
        }
        p++;
    }

    if (ultima_vogal == NULL) {
        printf("NULL");
    } else {
        printf("Endereço da última vogal: %p\n", (void *) ultima_vogal);
    }

    return 0;
}
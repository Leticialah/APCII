#include <stdio.h>

int main() {
    char string[50] = "Avaliacao 1";
    char *p = string;
    int i = 0; // variável auxiliar para contagem de strings

    while (*p != '\0') {
        printf("string[%d]: %c\n", i, *p);
        p++;
        i++;
    }

    return 0;
}
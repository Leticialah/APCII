// 6. **Algoritmo 6: Concatenação no início de uma string** Escreva um algoritmo em C, utilizando apenas ponteiros, que insere a string de origem à string de destino.

#include <stdio.h>
#include <string.h>

int main() {
    char destino[100] = "Autônoma";
    char origem[100] = "Universidade";

    int tamOrigem = strlen(origem);
    int tamDestino = strlen(destino);

    for (int i = tamDestino; i >= 0; i--) {
        destino[i + tamOrigem] = destino[i];
    }

    for (int i = 0; i < tamOrigem; i++) {
        destino[i] = origem[i];
    }

    printf("%s\n", destino); 
  
    return 0;
}
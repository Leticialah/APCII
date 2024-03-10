#include <stdio.h>
#include <ctype.h>

#define ENDERECO_INICIAL_STRING 0x100

int main() {
    char *endereco_inicial = (char *)ENDERECO_INICIAL_STRING; 
    char *string = endereco_inicial; 
    char *p = string;
    char caractere;
    int posicao = -1;
    int scan_resultado;

    printf("Digite o caractere que deseja procurar: ");
    scan_resultado = scanf(" %c", &caractere);

    if (scan_resultado != 1) {
        printf("Erro ao ler o caractere.\n");
        return 1;
    }

    caractere = toupper(caractere);
    while (*p != '\0') {
        if (toupper(*p) == caractere) {
            posicao = p - string;
        }
        p++;
    }

    if (posicao != -1) {
        printf("A ultima ocorrencia do caractere '%c' está em: %p.\n", caractere, &string[posicao]);
    } else {
        printf("Caractere nao encontrado.\n");
    }

    return 0;
}

// observação = Em alguns programas não é possível definir um endereço inicial da string (Como 0x100), por fornecer um ambiente pré-configurado para codificação, compilando e executando programas, mas geralmente não oferece controle direto sobre o endereço de memória.
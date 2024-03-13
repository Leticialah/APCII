// 3. **Algoritmo 3: Invertendo uma string** Com base na ilustração a seguir, implemente em linguagem C a inversão da String utilizando apenas ponteiros.De acordo com a figura, para inverter a string, o conteúdo apontado na posição p1 (’H’) deve ser trocado com o conteúdo apontado na posição p2 (’d’), resultando em p1 com o conteúdo (’d’) e p2 com o conteúdo (’H’). Em seguida, p1 muda para o próximo endereço p1++ e p2 para o endereço p2—. A troca deverá acontecer até que o endereço de p1 seja igual ao endereço de p2.

#include <stdio.h>
#include <string.h>

void reverterstring(char *str) {
    char *p1 = str; 
    char *p2 = str + strlen(str) - 1;

    while (p1 < p2) {
        char temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1++;
        p2--;
    }
}

int main() {
    char str[] = "Hello World"; 
    printf("String original: %s\n", str);

    reverterstring(str);

    printf("String invertida: %s\n", str);

    return 0;
}
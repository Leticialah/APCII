#include <stdio.h>
// protótipos de funções
void muda_variavel_val(int n, int valor);
void muda_variavel_ref(int &n, int valor);
void muda_variavel_ref_ponteiro(int *n, int valor);
void zerarVetor(int vet[], int tamanho);
void listar(int vet[], int tamanho);
void somarVetor(int tamanho, int vet[tamanho]);

// passagem de parâmetros por valor
void muda_variavel_val(int n, int valor) {
  n = valor;
}
// passagem de parâmetros por referência
void muda_variavel_ref(int &n, int valor) {
  n = valor;
}
// simula uma passagem de parâmetros por "ref" com ponteiros
void muda_variavel_ref_ponteiro(int *n, int valor) {
  *n = valor;
}

void zerarVetor(int vet[], int tamanho) {
  for(int i=0; i<tamanho; i++) {
    vet[i] = 0; 
  }
 }

void listar(int vet[], int tamanho) {
  for(int i = 0; i < tamanho; i++) {
    printf("[%d]",vet[i]);
  }
  printf("\n");
}
  // void somarVetor(int *vet, int tamanho) 
  // void somarVetor(int vet[], int tamanho)
void somarVetor(int tamanho, int vet[tamanho]) 
{
  int soma = 0;
  for(int i = 0; i < tamanho; i++) {
    soma = soma + vet[i];
    printf("soma: %d\n",soma);
    if(soma > 10) {
      printf("Excedeu 10\n");
      return;
    }
  }
}

int main() {
  int x = 5;
  muda_variavel_ref(x, 7);
  printf("x: %d\n", x);
  muda_variavel_val(x, 3);
  printf("x: %d\n", x);
  int *px;
  px = &x; // valor
  // int *px = &x;
  *px = 2;
  muda_variavel_ref_ponteiro(&x, 9);
  printf("x: %d\n", x);

  int vet[] = {1, 2, 3, 4, 5, 6};
  listar(vet, 6);
  somarVetor(6, vet);
  zerarVetor(vet, 6);
  listar(vet, 6);
  return 0;
}
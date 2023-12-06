#include <stdio.h>
#include <math.h>

int quantidade = 0; 

void TorreHanoi(int origem, int destino, int auxiliar, int quantidade) {
  if (quantidade == 1) {
    printf("Mova de %i para %i\n", origem, destino);
  }else{
    TorreHanoi(origem, auxiliar, destino, quantidade-1);
    printf("Mova de %i para %i\n", origem, destino);
    TorreHanoi(auxiliar, destino, origem, quantidade-1);
  }
}

int main(){
  printf("Digite a quantidade de discos: \n");
  scanf("%i", &quantidade);
  int minMovi = pow(2, quantidade) - 1;
  printf("\nNotação: mova a menor peça disponível da posição(1, 2 ou 3) para outra posição(1, 2 ou 3) \n");
  printf("\nQuantidade mínima de movimentos: %i\n", minMovi);
  TorreHanoi(1, 3, 2, quantidade);
  return 0;
}
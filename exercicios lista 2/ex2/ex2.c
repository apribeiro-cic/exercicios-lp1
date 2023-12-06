#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define N 1000

int vec[N];
int lrgstValue1 = 0, lrgstValue2 = 0, lrgstValue3 = 0;
int smllstValue1 = 0, smllstValue2 = 0, smllstValue3 = 0;
int contOcorrencias = 0, aux = 0;
float mediana = 0.0, soma = 0.0, media = 0.0, somaDif = 0.0, desvioP = 0.0;

int getLargestValue(int vecP[], int tamanho) {
  lrgstValue1 = vecP[tamanho-1];
  lrgstValue2 = vecP[tamanho-2];
  lrgstValue3 = vecP[tamanho-3];
  return 0;
}

int getSmallestValue(int vecP[], int tamanho) {
  smllstValue1 = vecP[0];
  smllstValue2 = vecP[1];
  smllstValue3 = vecP[2];
  return 0;
}

int sortArray(int vecP[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    for (int i = tamanho - 2; i >= 0; i--) {
      if (vecP[i] > vecP[i + 1]) {
        aux = vecP[i + 1];
        vecP[i + 1] = vecP[i];
        vecP[i] = aux;  
      }
    }
  }
  return 0;
}

int calcMedia(int vecP[], int tamanho) {
  soma = 0.0;
  for (int i = 0; i < tamanho; i++) {
    soma+= vecP[i];
  }
  media = soma / tamanho;

  return 0;
}

int calcDesvioP(int vecP[], int tamanho) {
  somaDif = 0;
  for (int i = 0; i < tamanho; i++) {
    somaDif += pow((vecP[i] - media), 2);
  }

  desvioP = sqrt((somaDif) / tamanho);

  return 0;
}

int calcMediana(int vecP[], int tamanho) {
  int num1, num2;
  num1 = tamanho / 2;
  num2 = num1 - 1;

  mediana = (vecP[num1] + vecP[num2]) / 2;

  return 0;
}

int ocorrenciaNum(int valor) {
  int conta = 0;
  for (int i = 0; i < N; i++) {
    if (valor == vec[i]) {
      conta++;
    }
  }
  return conta;
}

int novoArray(int vecP[]) {
  int j = 0;
  for (int i = 0; i < N; i++) {
    int numOcorrencia = ocorrenciaNum(i);
    if (numOcorrencia != 0) {
      printf("O valor %i aparece %i vezes\n", i, numOcorrencia);
      contOcorrencias++;
      vecP[j++] = i;
      soma += vecP[i];  
    }
  }
  return 0;
}

int main() {
  printf("Array aleatório: \n");
  for (int i = 0; i < N; i++) {
    vec[i] = rand() % 1000;
    soma += vec[i];
    printf("%i, ", vec[i]);
  }

  printf("\n\n");

  sortArray(vec, N);
  calcMedia(vec, N);
  calcDesvioP(vec, N);
  calcMediana(vec, N);
  getLargestValue(vec, N);
  getSmallestValue(vec, N);

  printf("Array aleatório ordenado: \n");
  for (int i = 0; i < N; i++) {
    printf("%i, ", vec[i]);
  }

  printf("\n\n");

  printf("3 maiores valores: %i, %i, %i\n", lrgstValue1, lrgstValue2, lrgstValue3);
  printf("3 menores valores: %i, %i, %i\n", smllstValue1, smllstValue2, smllstValue3);
  printf("Média: %.2f\n", media);
  printf("Desvio padrão: %f\n", desvioP);
  printf("Mediana: %.2f\n", mediana);
  
  printf("\n");

  int vec2[contOcorrencias];
  novoArray(vec2);

  printf("\n");
  
  printf("Array novo: \n");
  for (int i = 0; i < contOcorrencias; i++) {
    printf("%i, ", vec2[i]);
  }
  
  calcMedia(vec2, contOcorrencias);
  calcMediana(vec2, contOcorrencias);
  calcDesvioP(vec2, contOcorrencias);
  
  printf("\nMédia: %.2f\n", media);
  printf("Desvio padrão: %f\n", desvioP);
  printf("Mediana: %.2f\n\n", mediana);
}
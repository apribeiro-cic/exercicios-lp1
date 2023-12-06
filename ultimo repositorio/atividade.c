#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    printf("Entre com o número de elementos...\n");
    return -1;
  }

  int nOfElements = atoi(argv[1]);
  int vec[nOfElements];
  int aux = 0;
  srand(time(0));

  printf("Array aleatório:\n");
  for (int i = 0; i < nOfElements; i++) {
    vec[i] = rand() % 10;
    printf("%i\n", vec[i]);
  }

  printf("\nOrdenação:\n");

  for (int i = 0; i < nOfElements; i++) {
    for (int i = nOfElements - 2; i >= 0; i--) {
      if (vec[i] > vec[i + 1]) {
        aux = vec[i + 1];
        vec[i + 1] = vec[i];
        vec[i] = aux;
      }
    }
  }

  for (int i = 0; i < nOfElements; i++) {
    printf("%i\n", vec[i]);
  }
  return 0;
}
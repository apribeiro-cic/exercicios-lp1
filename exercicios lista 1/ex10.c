#include <stdio.h>
#include <math.h>

int main() {
  float lado = 0, diagonal = 0, perimetro = 0, area = 0;
  
  printf("Digite o lado de um quadrado: \n");
  scanf("%f", &lado);

  diagonal = sqrt((lado * lado) + (lado * lado));
  perimetro = 4*lado;
  area = lado * lado;
  printf("A diagonal do quadrado é: %f\n", diagonal);
  printf("O perímetro do quadrado é: %f\n", perimetro);
  printf("A área do quadrado é: %f\n", area);
}
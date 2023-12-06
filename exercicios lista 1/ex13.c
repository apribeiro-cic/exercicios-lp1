#include <stdio.h>
#include <math.h>

int main() {
  float A = 0, B = 0, C = 0, raiz1, raiz2, delta;

  printf("Digite o valor do coeficiente A: \n");
  scanf("%f", &A);
  printf("Digite o valor do coeficiente B: \n");
  scanf("%f", &B);
  printf("Digite o valor do coeficiente C: \n");
  scanf("%f", &C);

  delta = (B * B) - 4 * A * C;
  raiz1 = ((-B + sqrt(delta))/(2*A));
  raiz2 = ((-B - sqrt(delta))/(2*A));

  if (isnan(raiz1) && isnan(raiz2)) {
    printf("A função não possui raízes reais.");
  } else if (raiz1 == raiz2) {
    printf("A função possui uma raíz real igual a: %f", raiz1);
  } else {
    printf("A função possui raízes iguais a: {%f, %f}", raiz1, raiz2);
  }
}
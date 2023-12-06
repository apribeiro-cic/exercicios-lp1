#include <stdio.h>
#include <math.h>

int main() {
  float cateto1 = 0, cateto2 = 0, hipotenusa = 0, perimetro = 0, area = 0;
  
  printf("Digite o valor do cateto 1: \n");
  scanf("%f", &cateto1);
  printf("Digite o valor do cateto 2: \n");
  scanf("%f", &cateto2);

  hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
  perimetro = cateto1 + cateto2 + hipotenusa;
  area = (cateto1 * cateto2)/2;

  printf("O quadrado da hipotenusa é: %f\n", hipotenusa * hipotenusa);
  printf("O perimetro do triângulo é: %f\n", perimetro);
  printf("A área do triângulo é: %f\n", area);
  
}
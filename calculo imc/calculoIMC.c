#include <stdio.h>

int main() {
  int sexo = 0;
  float altura = 0, peso = 0, imc = 0, pesoideal = 0;

  printf("Calculadora de IMC \n");
  printf("Informe seu sexo (Escreva 0 (feminino) ou 1 (masculino)): \n");
  scanf("%i", &sexo);
  printf("Informe sua altura (Ex: 1.70, ATENÇÃO AO USO DO PONTO): \n");
  scanf("%f", &altura);
  printf("Informe seu peso (Ex, 50.5 ATENÇÃO AO USO DO PONTO): \n");
  scanf("%f", &peso);

  imc = peso / (altura * altura);

  printf("Considerando os dados passados por você, seu IMC é: %.2f\n", imc);
  if (imc <= 18.5) {
    printf("Considerando o seu IMC, você está abaixo do peso. \n");
  } else if (imc >= 18.6 && imc <= 24.9) {
    printf("Considerando o seu IMC, você está na faixa normal de peso. \n");
  } else if (imc >= 25 && imc <= 29.9) {
    printf("Considerando o seu IMC, você está acima do peso. \n");
  } else if (imc >= 30) {
    printf("Considerando o seu IMC, você está obeso. \n");
  }

  // Cálculo considerando o IMC ideal como 21,75, para saber o peso ideal.
  pesoideal = (altura * altura) * 21.75;

  printf("Conforme sua altura, o peso ideal para você deve estar em torno de: "
         "%.2f \n",
         pesoideal);

  return 0;
}
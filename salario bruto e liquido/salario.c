#include <stdio.h>

int main() {
  float salarioBruto = 0, salarioLiquido = 0, vale = 0, salarioMinimo = 0;

  printf("Digite o valor atual do salário mínimo: ");
  scanf("%f", &salarioMinimo);
  
  printf("Digite o valor bruto do seu salário: ");
  scanf("%f", &salarioBruto);

  printf("Digite o valor do seu vale alimentação: ");
  scanf("%f", &vale);

  //FGTS = 8%
  //IRPF = 27,5%
  //Impostos finais = 35.5%

  salarioLiquido = salarioBruto - (salarioBruto * (35.5/100));
  
  if (salarioLiquido < salarioMinimo) {
    salarioLiquido = salarioMinimo;
  }

  salarioLiquido += vale;
  
  printf("O seu salário líquido é: %.2f \n", salarioLiquido);
  
  return 0;
}
#include <stdio.h>

int main4() {
  int cha;

  printf("Digite um número inteiro positivo: \n");
  scanf("%i", &cha);
  if (cha < 0) {
    cha = -cha;
  }

  if (cha >= 32 && cha < 128) {
    printf("O valor digitado faz parte da tabela de caracteres imprimíveis em ASCII\n");
  } else if (cha <= 32) {
    cha = 32;
    printf("O valor digitado não faz parte da tabela de caracteres imprimíveis em ASCII\n");
  } else if (cha >= 127) {
    printf("O valor digitado não faz parte da tabela de caracteres imprimíveis em ASCII\n");
    cha = cha % 127;
  }

  printf("%d em decimal\n", cha);
  printf("%o em octal\n", cha);
  printf("%x em hexadecimal\n", cha);
  printf("%c em caractere\n", cha);

  return 0;
}
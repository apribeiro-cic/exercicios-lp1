#include <stdio.h>
#include <string.h>

#define D1 5
#define D2 7

int mat[D1][D2];
int numAcertos = 0;

int mostrarJogo () {
  
  printf("         2. \n");
  printf("1. %c %c %c %c %c\n", mat[0][0], mat[0][1], mat[0][2], mat[0][3], mat[0][4]);
  printf("         %c  \n", mat[1][3]);
  printf("         %c  \n", mat[2][3]);
  printf("    3. %c %c %c %c %c\n", mat[3][2], mat[3][3], mat[3][4], mat[3][5], mat[3][6]);
  printf("         %c  \n", mat[4][3]);
  
  return 0;
}

int checarResposta(int num, char resp[]) {
  int contaAcertos = 0;
  char resp1[5] = "tempo";
  char resp2[5] = "piano";
  char resp3[5] = "inata";
  if (num == 1) {
    contaAcertos = 0;
    for (int i = 0; i < 6; i++) {
      if (resp1[i] == resp[i]) {
        contaAcertos++;
      } 
    }
    if (contaAcertos == 5) {
      printf("\nVocê acertou!\n\n");
      for (int i = 0; i < 6; i++) {
        mat[0][i] = resp1[i];
      }
      numAcertos++;
    } else {
      printf("\nVocê errou.\n\n");
    }
  } else if (num == 2) {
    contaAcertos = 0;
    for (int i = 0; i < 6; i++) {
      if (resp2[i] == resp[i]) {
        contaAcertos++;
      } 
    }
    if (contaAcertos == 5) {
      printf("\nVocê acertou!\n\n");
      for (int i = 0; i < 5; i++) {
        mat[i][3] = resp2[i];
      }
      numAcertos++;
    } else {
      printf("\nVocê errou.\n\n");
    }
  } else if (num == 3) {
    contaAcertos = 0;
    for (int i = 0; i < 6; i++) {
      if (resp3[i] == resp[i]) {
        contaAcertos++;
      } 
    }
    if (contaAcertos == 5) {
      printf("\nVocê acertou!\n\n");
      for (int i = 0; i < 7; i++) {
        mat[3][i+2] = resp3[i];
      }
      numAcertos++;
    } else {
      printf("\nVocê errou.\n\n");
    }
  } else {
    printf("\nResposta errada. DICA: Todas a palavras tem 5 letras.\n\n");
  }
  return 0;
}

int main() {
  char u = '_';
  for (int i = 0; i < D1; i++) {
    for (int j = 0; j < D2; j++) {
      mat[i][j] = u;
    }
  }
  
  int numero;
  char resposta[5];
  
  mostrarJogo();
  while (numAcertos < 3) {
    printf("\n1. Qual é coisa, qual é ela, que não tem pés nem patas e passa e corre, sem parar. Uns dizem que voa, mas não tem asas e outros dizem ser dinheiro, sem jamais o terem visto. \n");
    printf("2. Tem 88 teclas, mas não é teclado.\n");
    printf("3. Tipo de habilidade que está conosco desde o nascimento, mas alguns levam uma vida inteira pra descobrir. \n");
    printf("Digite sua resposta: \n");
    fgets(resposta, 6, stdin);
    scanf("%i", &numero);
    checarResposta(numero, resposta);
    mostrarJogo();
  }

  printf("\nParabéns, você ganhou!");
}
//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 24
#include <stdio.h>
int main(){
   
int A[2][2], B[2][2], C[2][2], i, j, num;

for ( i = 0; i < 2; i++) {
   for ( j = 0; j < 2; j++) {
      printf("Insira o numero A%d%d: ", i+1, j+1);
      scanf("%d", &num);
      A[i][j] = num;
   }
}

for ( i = 0; i < 2; i++) {
   for ( j = 0; j < 2; j++) {
      printf("Insira o numero B%d%d: ", i+1, j+1);
      scanf("%d", &num);
      B[i][j] = num;
   }
}

for ( i = 0; i < 2; i++) {
   for ( j = 0; j < 2; j++) {
      C[i][j] = A[i][j] + B[i][j];
   }
}

printf("C = | %d %d |\n    | %d %d |", C[0][0], C[0][1], C[1][0], C[1][1]);
return 0;
}
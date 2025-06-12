//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 23
#include <stdio.h>
int main() {

   int mat[3][3], soma = 0, i, j, num;

   for ( i = 0; i < 3; i++) {
      for ( j = 0; j < 3; j++) {
         printf("Insira o numero %d da linha %d: ", j+1, i+1);
         scanf("%d", &num);
         mat[i][j] = num;
      }
   }

   for ( i = 0; i < 3; i++) {
      for ( j = 0; j < 3; j++) {
         i == j ? soma += mat[i][j] : soma;
      }
   }
   
   printf("%d", soma);

   return 0;
}

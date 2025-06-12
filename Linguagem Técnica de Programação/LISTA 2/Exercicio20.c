//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 20
#include <stdio.h>
int main(){

   int A[5], B[5], C[5], i, num;
   
   // Inserindo valores em A:
   for ( i = 0; i < 5; i++)
   {
      printf("Digite o valor para ser inserido no vetor A: ");
      scanf("%d", &num);
      A[i] = num;
   }
   
   // Inserindo valores em B:
   for ( i = 0; i < 5; i++)
   {
      printf("Digite o valor para ser inserido no vetor B: ");
      scanf("%d", &num);
      B[i] = num;
   }

   // Calculando e imprimindo C:
   printf("C = [ ");

   for ( i = 0; i < 5; i++)
   {
      C[i] = A[i] + B[i];
      printf("%d ", C[i]);
   }

   printf("]");

return 0;
}

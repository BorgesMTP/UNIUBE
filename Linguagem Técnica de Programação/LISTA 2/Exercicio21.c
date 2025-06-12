//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 21
#include <stdio.h>
int main() {
   
   int vetor[8], num, pares = 0, impares = 0, i;

   for ( i = 0; i < 8; i++)
   {
      printf("Digite um numero inteiro: ");
      scanf("%d", &num);
      vetor[i] = num;
      vetor[i] % 2 == 0 ? pares++ : impares++;
   }
   printf("Vetor = [ ");

   for ( i = 0; i < 8; i++)
   {
      printf("%d ", vetor[i]);
   }

   printf("]\n");
   printf("Pares: %d\nImpares: %d\n", pares, impares);
   
   return 0;
}

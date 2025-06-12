//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 22
#include <stdio.h>
int main(){
   
   int n, x, pos = 0, i, num, quant = 0;

   printf("Insira o tamanho desejado do vetor: ");
   scanf("%d", &n);

   int vetor[n];

   for ( i = 0; i < n; i++)
   {
      printf("Insira o %d numero no vetor: ", i+1);
      scanf("%d", &num);
      vetor[i] = num;
   }

   printf("\nQual numero voce gostaria de buscar? ");
   scanf("%d", &x);
   
   for ( i = 0; i < n; i++)
   {
      if (x == vetor[i]) {
         pos = i;
         quant++;
         printf("\nO numero %d existe no vetor na posicao %d.", x, pos);
      } 
   }
   
   if (quant == 0){
      printf("\nO numero %d nao existe no vetor.", x);
   }

   return 0;
}

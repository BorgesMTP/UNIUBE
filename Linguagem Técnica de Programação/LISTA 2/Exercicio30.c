//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 30
#include <stdio.h>
int soma_vetor(int n, int vetor[n]){
   int i, soma = 0;
   for ( i = 0; i < n; i++) {
      soma += vetor[i];
   }
   return soma;
}

int main(){
   
   int tamanho = 0, i, num;

   printf("Insira o tamanho desejado do vetor: ");
   scanf("%d", &tamanho);

   int vetor[tamanho];

   for ( i = 0; i < tamanho; i++) {
      printf("Insira o %do numero do vetor: ", i+1);
      scanf("%d", &num);
      vetor[i] = num;
   }

   int soma = soma_vetor(tamanho, vetor);
   
   printf("A soma dos elementos do vetor e: %d", soma);

   return 0;
}
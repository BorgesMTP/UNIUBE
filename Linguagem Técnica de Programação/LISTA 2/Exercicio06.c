//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 06
   #include <stdio.h>
   #include <math.h>
   int main(){
     
      int N = 0, soma = 0, i;

      printf("Insira um numero inteiro N: ");
      scanf("%d", &N);
   
      for ( i = 1; i <= N; i++) {
         soma += pow(i,i);
      }
      
      printf("A soma dos quadrados de 1 a %d e: %d", N, soma);

    return 0;
   }

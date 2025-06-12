//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 03
   #include <stdio.h>
   int main() {
     
   int i, N = 0;

   printf("Insira um numero inteiro: ");
   scanf("%d", &N);

   for (i = 1; i < N; i++){
      if (i % 7 == 0) {
         printf("%d\n",i);
      }
   }
    return 0;
   }

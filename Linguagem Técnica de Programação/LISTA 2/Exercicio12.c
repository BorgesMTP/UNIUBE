//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 12
   #include <stdio.h>
   #include <math.h>

   int main() {
   
   int i = 0, N = 0, soma = 0;
   
   printf("Insira um numero inteiro: ");
   scanf("%d", &N);

   while (i <= N) {
      soma += pow(3,i);
      i++;
   }

   printf("O somatorio e igual a : %d", soma);

   return 0;
   }

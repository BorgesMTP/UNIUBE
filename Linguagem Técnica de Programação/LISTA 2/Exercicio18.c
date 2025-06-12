//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 18
   #include <stdio.h>
   int main() {
      int N = 0, num, i, j;

      printf("Digite a quantidade de numeros da lista: ");
      scanf("%d", &N);

      int lista[N];

      for ( i = 0; i < N; i++) {
         printf("Digite o numero para inserir na lista: ");
         scanf("%d", &num);
         lista[i] = num;
      }
      
      for ( j = N-1; j >= 0; j--) {
         printf("%d ", lista[j]);
      }
      

      return 0;
   }

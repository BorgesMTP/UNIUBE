//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 19
   #include <stdio.h>
   int main() {

      int vetor[10], num, maior, menor, pos_maior = 0, pos_menor = 0, i;

      for ( i = 0; i < 10; i++) {
         printf("Digite o numero a inserir na lista: ");
         scanf("%d", &num);
         vetor[i] = num;
      }

      maior = vetor[0];
      for ( i = 0; i < 10; i++) {     
         if (vetor[i] > maior){
            maior = vetor[i];
            pos_maior = i;
         }
      }

      menor = vetor[0];
      for ( i = 0; i < 10; i++) {
         if (vetor[i] < menor){
            menor = vetor[i];
            pos_menor = i;
         }
      }

      printf("O maior numero e %d e sua posicao e %d.\n", maior, pos_maior);
      printf("O menor numero e %d e sua posicao e %d.\n", menor, pos_menor);

      return 0;
   }

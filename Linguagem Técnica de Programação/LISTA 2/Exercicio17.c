//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 17
   #include <stdio.h>
   int main(){
      int num = 0, maior = 0;
      do {
         printf("Digite um numero inteiro positivo (Digite -1 para sair): ");
         scanf("%d", &num);

         if (num == -1) {
            printf("\nEncerrando o Programa . . .\n\n");
            if (maior > 0){
               printf("O maior numero digitado foi %d.\n", maior);
            }
            break;
         }
         if (num > maior){
            maior = num;
         }
      } while (num != -1);

    return 0;
   }

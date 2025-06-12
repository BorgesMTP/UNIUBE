//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 13
   #include <stdio.h>
   #include <stdbool.h>

   int main(){
      
      int num = 0, fat = 1, i = 1;
      
      bool condicao = true;

      while (condicao == true) {
         printf("Insira um numero inteiro maior que zero: ");
         scanf("%d", &num);

         if (num > 0) {
            break;
         }
      }
      
      while (i <= num) {
         fat *= i;
         i++;
      }

      printf("O fatorial de %d e igual a: %d", num, fat);

    return 0;
   }

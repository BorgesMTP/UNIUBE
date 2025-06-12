//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 16
   #include <stdio.h>
   #include <stdbool.h>
   #include <math.h>
   int main(){
      
      bool loop = true;
      float num = 0;

      do {
         printf("Digite um numero positivo (Para sair digite um numero negativo): ");
         scanf("%f", &num);

         if (num < 0) {
            printf("\nEncerrando o programa . . .\n");
            break;
         } else {
            printf("\nA raiz quadrada de %.2f e %.2f.\n\n", num, sqrt(num));
         }
      } while (loop == true);

    return 0;
   }

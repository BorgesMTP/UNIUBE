//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 07
   #include <stdio.h>
   int main(){
     
      int i = 0, fat = 1, num = 0;

      do {
         printf("Insira um numero inteiro positivo: ");
         scanf("%d", &num);
         
         if (num<=0){
            printf("Numero invalido, tente novamente.\n");
         } else {
            break;
         }
      } while (num <= 0);
      
      for ( i = num; i > 0; i--) {
         fat *= i;
      }

      printf("%d fatorial e igual a: %d", num, fat);
      

    return 0;
   }

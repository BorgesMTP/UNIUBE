//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 14
   #include <stdio.h>
   #include <stdbool.h>

   int main(){
      int menu = 0;
      float n1 = 0, n2 = 0;
      bool vdd = true;

      while (vdd == true) {
         printf("+---------------------+\n");
         printf("|     CALCULADORA     |\n");
         printf("+---------------------+\n");
         printf("| 1 - Soma            |\n");
         printf("| 2 - Subtracao       |\n");
         printf("| 3 - Divisao         |\n");
         printf("| 4 - Multiplicacao   |\n");
         printf("| 5 - Sair            |\n");
         printf("+---------------------+\n\n");

         while ( menu <= 0 || menu > 5 ){
            printf("Digite a opcao desejada: ");
            scanf("%d", &menu);

            if (menu <=0 || menu > 5){
               printf("\n! ! ! Valor invalido ! ! !\n\n");
            }
         }

         if ( menu == 1) {
            printf("Insira 2 numeros inteiros separados por espaco (Ex.: 2 8): ");
            scanf("%f %f", &n1, &n2);
            printf("Soma: %.0f\n\n", n1 + n2);
            menu = 0;
         } else if ( menu == 2 ) {
            printf("Insira 2 numeros inteiros separados por espaco (Ex.: 2 8): ");
            scanf("%f %f", &n1, &n2);
            printf("Subtracao: %.0f\n\n", n1 - n2);
            menu = 0;
         } else if ( menu == 3 ) {
            printf("Insira 2 numeros inteiros separados por espaco (Ex.: 2 8): ");
            scanf("%f %f", &n1, &n2);
            printf("Divisao: %.2f\n\n", n1 / n2);
            menu = 0;
         } else if ( menu == 4 ) {
            printf("Insira 2 numeros inteiros separados por espaco (Ex.: 2 8): ");
            scanf("%f %f", &n1, &n2);
            printf("Multiplicacao: %.0f\n\n", n1 * n2);
            menu = 0;
         } else {
            printf("Encerrando o programa . . .");
            break;
         }
         
      }   
   return 0;
   }

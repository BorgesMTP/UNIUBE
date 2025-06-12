//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 15
   #include <stdio.h>
   #include <stdbool.h>

   int main(){
      int menu = 0;
      float n1 = 0, convert = 0;
      bool vdd = true;

      do {
         printf("+----------------------------------------+\n");
         printf("|             MENU DE OPCOES             |\n");
         printf("+----------------------------------------+\n");
         printf("| 1 - Converte de Celsius para Farenheit |\n");
         printf("| 2 - Converte de Celsius para Kelvin    |\n");
         printf("| 3 - Converte de Farenheit para Celsius |\n");
         printf("| 4 - Sair                               |\n");
         printf("+----------------------------------------+\n\n");

         while ( menu <= 0 || menu > 4 ){
            printf("Digite a opcao desejada: ");
            scanf("%d", &menu);

            if (menu <=0 || menu > 5){
               printf("\n! ! ! Valor invalido ! ! !\n\n");
            }
         }

         if ( menu == 1) {
            printf("Insira a temperatura em graus Celsius: ");
            scanf("%f", &n1);

            convert = (n1 * 9 / 5) + 32;

            printf("%.2f Celsius e igual a %.2f Farenheit.\n\n", n1, convert);
            menu = 0;
         } else if ( menu == 2 ) {
            printf("Insira a temperatura em graus Celsius: ");
            scanf("%f", &n1);

            convert = n1 + 273.15;

            printf("%.2f Celsius e igual a %.2f Kelvin.\n\n", n1, convert);
            menu = 0;
         } else if ( menu == 3 ) {
            printf("Insira a temperatura em graus Farenheit: ");
            scanf("%f", &n1);

            convert = (n1 - 32) * 5 / 9;

            printf("%.2f Farenheit e igual a %.2f Celsius.\n\n", n1, convert);
            menu = 0;
         } else if ( menu == 4 ) {
            printf("Encerrando o programa . . .");
            break;
         }
         
      } while (vdd == true);
   return 0;
   }

//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 25
#include <stdio.h>
int main(){
   
   int num, contador = 0, matriz[3][4], i, j;
   
   for ( i = 0; i < 3; i++) {
      for ( j = 0; j < 4; j++) {
         printf("Insira o numero %d da linha %d: ", j+1, i+1);
         scanf("%d", &num);
         matriz[i][j] = num;
      }
   }

   printf("\nQual numero voce gostaria de buscar na matriz? ");
   scanf("%d", &num);

   for ( i = 0; i < 3; i++) {
      for ( j = 0; j < 4; j++) {
         if (matriz[i][j] == num){
            contador++;
         }
      }
   }

   if (contador == 0){
      printf("\nO numero %d nao aparece na matriz.\n", num);
   } else {
      printf("\nO numero %d aparece na matriz %d vezes.\n", num, contador);
   }

return 0;
}
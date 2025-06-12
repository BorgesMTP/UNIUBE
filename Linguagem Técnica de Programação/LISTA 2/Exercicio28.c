//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 28
#include <stdio.h>
int numero_primo(int numero) {
   int i, contador = 0;

   for ( i = 1; i <= numero; i++) {
      if (numero % i == 0){
         contador++;
      }
   }
   
   if (contador == 2 || numero == 1){
      return 1;
   } else {
      return 0;
   }
}

int main(){
     
   int n, primo;

   do {
   printf("Insira um numero para verificar se e primo: ");
   scanf("%d", &n);
   } while (n <= 0);
   
   primo = numero_primo(n);

   if (primo == 0){
      printf("O numero %d nao e primo.", n);
   } else {
      printf("O numero %d e primo.", n);
   }

   return 0;
}

//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 27
#include <stdio.h>
int maior(int a, int b){
   if (a > b) {
      return a;
   } else {
      return b;
   }
}

int main(){
   
   int n1, n2, m;

   printf("Insira os numeros desejados separados por espaco (Ex.: 1 2): ");
   scanf("%d %d", &n1, &n2);

   m = maior(n1, n2);

   printf("O maior numero entre os 2 e: %d", m);
   return 0;
}

//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 04
   #include <stdio.h>
   int main() {
     
      int i;
    
      for ( i = 1; i < 101; i++) {
         if ( i % 10 == 0){
            printf("O numero %d e multiplo de 10.\n", i);
         } else {
            printf("%d\n", i);
         }
      }
      

    return 0;
   }

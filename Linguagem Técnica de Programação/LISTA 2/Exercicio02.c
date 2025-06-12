//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 02
   #include <stdio.h>
   int main() {
     
   int i, soma = 0;

   for ( i = 1; i < 501; i++)
   {
      if (i % 3 == 0) {
         soma += i;
      }
   }
   
   printf("A soma de todos os numeros entre 1 e 500, multiplos de 3 e: %d", soma);

    return 0;
   }

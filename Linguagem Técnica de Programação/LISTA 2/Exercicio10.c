//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 10
   #include <stdio.h>
   int main(){
     
   int num, maior = 0, menor;

      while (num != 0)
      {
         printf("Insira um numero inteiro: ");
         scanf("%d", &num);
         if (num > maior && num !=0)
         {
            maior = num;
         } else if (num !=0 && num < menor)
         {
            menor = num;
         }
      }
      printf("O maior numero e %d e o menor numero e %d", maior, menor);


    return 0;
   }

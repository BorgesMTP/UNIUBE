//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 11
   #include <stdio.h>
   int main(){
     
   int num, mult = 0;
   
   while (num !=0)
   {
      printf("Insira um numero inteiro: ");
      scanf("%d", &num);
      if (num == 0)
      {
         break;
      } else if (num % 3 == 0)
      {
         mult += num;
      }

   }
   
   printf("A soma dos numeros inseridos, multiplos de 3 e: %d", mult);

    return 0;
   }

//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 09
   #include <stdio.h>
   int main(){
     
   int num, contador = 0;

      while (num != 0)
      {
         printf("Insira um numero inteiro: ");
         scanf("%d", &num);
         contador++;
      }
      printf("foram lidos %d numeros", contador);

    return 0;
   }

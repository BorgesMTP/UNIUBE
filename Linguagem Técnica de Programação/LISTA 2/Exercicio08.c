//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 08
   #include <stdio.h>
   int main(){
     
      float i = 0, num = 0, A = 0;

      do
      {
         printf("Insira um numero: ");
         scanf("%f", &num);
         
         if (num<=0)
         {
            printf("Numero invalido, tente novamente.\n");
         }
         else
         {
            break;
         }
      } while (num <= 0);

      for ( i = 0; i <= num; i++)
      {
       A += (num-i)/(i+1);
      }

      printf("%.2f",A);
      

    return 0;
   }

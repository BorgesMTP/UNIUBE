//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 05
   #include <stdio.h>
   int main(){
   
      int M, N, i, soma = 0;

      printf("Insira o valor inteiro minimo do intervalo: ");
      scanf("%d", &M);
      
      printf("Insira o valor inteiro maximo do intervalo: ");
      scanf("%d", &N);

      for (i = M; i <= N+1; i++)
      {
         if (i % 2 != 0) {
            soma += i;
         }
      }
      printf("A soma dos numeros impares de %d -a-> %d e: %d", M, N, soma);

    return 0;
   }

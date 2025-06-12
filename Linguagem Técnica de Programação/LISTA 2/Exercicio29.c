//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 29
#include <stdio.h>
float conversor(float temp){

   float farenheit = (temp * 9 / 5) + 32;

   return farenheit;

}

int main(){
   
   float c, f;

   printf("Insira a temperatura em graus celsius: ");
   scanf("%f", &c);

   f = conversor(c);

   printf("%.2f celcius equivalem a %.2f farenheit.", c, f);

   return 0;
}
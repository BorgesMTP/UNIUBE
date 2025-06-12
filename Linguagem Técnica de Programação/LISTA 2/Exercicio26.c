//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: Marco Túlio Pereira Borges
//RA: 517551-3
//Atividade: Lista de Exercícios 2 - Exercício 26
#include <stdio.h>
unsigned long long calcularFatorial(int n) {
    // Fatorial de 0 é 1, por definição.
    if (n == 0) {
        return 1;
    }

    // Usamos unsigned long long para o resultado, pois os fatoriais crescem muito rápido.
    unsigned long long fatorial = 1;
    int i;

    // Multiplica o resultado por cada número de 2 até n.
    for (i = 2; i <= n; i++) {
        fatorial *= i; // o mesmo que fatorial = fatorial * i;
    }

    return fatorial;
}

int main() {
    int numero;
    unsigned long long resultado;

    // 1. Leia um número N do usuário
    printf("Digite um numero inteiro positivo para calcular seu fatorial: ");
    scanf("%d", &numero);

    // Verifica se o número é negativo, pois o fatorial não é definido para eles.
    if (numero < 0) {
        printf("Erro: O fatorial nao e definido para numeros negativos.\n");
    } else {
        // 2. Chame a função para calcular o fatorial
        resultado = calcularFatorial(numero);

        // 3. Exiba o resultado
        // Usamos %d para o 'numero' (int) e %llu para o 'resultado' (unsigned long long)
        printf("O fatorial de %d e: %llu\n", numero, resultado);
    }

    return 0;
}
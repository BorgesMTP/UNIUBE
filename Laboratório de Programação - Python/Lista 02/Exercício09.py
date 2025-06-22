# Exercício 09
N = int(input('Insira um número: '))
print(f'Todos: {list(range(N+1))}')
print(f'Ímpares: {[i for i in range(N+1) if i % 2 != 0]}')
print(f'Pares: {[i for i in range(N+1) if i % 2 == 0]}')
print(f'Múltiplos de 5: {[i for i in range(N+1) if i % 5 == 0]}')
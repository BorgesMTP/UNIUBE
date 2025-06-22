# Exercício 08
b = list(map(int, input('Insisra números separados por espaço: ').split(' ')))
print(f'Maior: {max(b)}')
print(f'Menor: {min(b)}')
print(f'Soma: {sum(b)}')
b.sort()
print(f'Crescente: {b}')
b.sort(reverse=True)
print(f'Decrescente: {b}')
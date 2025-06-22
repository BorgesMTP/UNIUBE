# Exercício 06
while True:
    num = int(input('Insira um número maior que zero: '))
    if num >= 0:
        break
    else:
        print('Número inválido.')

soma = sum(int(digito) for digito in str(num))
print(f'A soma dos algarismos do número {num} é: {soma}')
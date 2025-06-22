import math

E = 2.718280
PI = 3.14159

def normal(z):
    return 0.5 * (1 + math.erf(z / math.sqrt(2))) * 100

z = float(input('Insira o valor Z: '))
media = float(input('Insira o valor da média: '))
dp = float(input('Insira o valor do desvio padrão: '))
num = float(input('Insira o número alvo: '))

if z == 0:
    z = float(( num - media ) / dp)
elif media == 0:
    media = num - ( z * dp )
elif dp == 0:
    dp = ( num - media ) / z
else:
    num = ( dp * z ) + media

print(f'\nZ: {z:.2f}')
print(f'Média: {media:.2f}')
print(f'Desvio Padrão: {dp:.2f}')
print(f'Posição: {num:.2f}')
print(f'A probabilidade de ser menor que {num} é: {normal(z):.2f}%')
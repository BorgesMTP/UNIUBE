# Exercício 14
def soma(lista):
    soma = 0
    for i  in range(len(lista)):
        soma = soma + lista[i]
    return soma
# Exemplo:
lista1 = [1, 2, 3, 4, 5]
print(soma(lista1))
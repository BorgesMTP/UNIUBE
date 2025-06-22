# Exercício 16
def trace(matriz):

    if len(matriz[0]) == len(matriz):
        
        soma = 0

        for i in range(len(matriz)):
            soma = soma + matriz[i][i]

    return soma
# Exemplo
matriz1 = [[1,2],[3,4]]
print(trace(matriz1))
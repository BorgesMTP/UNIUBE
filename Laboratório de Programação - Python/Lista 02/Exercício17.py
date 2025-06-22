# Exercício 17
'''Crie uma função soma_matriz() que recebe duas matrizes e retorne uma matriz com a soma destas duas
matrizes anteriores. Lembre-se que só podemos somar matrizes que tenham mesmo número de linhas e colunas,
seu script deve checar isso antes de somar.'''

def soma_matriz(m1, m2):
    if len(m1) != len(m2) or any(len(m1[i]) != len(m2[i]) for i in range(len(m1))):
        return "Matrizes incompatíveis para soma."
    return [[m1[i][j] + m2[i][j] for j in range(len(m1[0]))] for i in range(len(m1))]
# Exemplo
matriz1 = [[1, 0] , [0, 1]]
matriz2 = [[0, 1] , [1, 0]]

print(f'Soma das matrizes \nA  = {matriz1}\nB  = {matriz2}\nAB = {soma_matriz(matriz1, matriz2)}')
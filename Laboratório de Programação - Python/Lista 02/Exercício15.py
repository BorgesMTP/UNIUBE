# Exercício 15
def square_matrix(matriz):

    if len(matriz[0]) == len(matriz):
        return True
    else:
        return False
    
# Exemplo
matriz1 = [[1, 2],[3, 4]]
print(square_matrix(matriz1))
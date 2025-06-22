# Exercício 05
notas = list(map(float, input('Insira as notas do aluno separadas por espaços: ').split(' ')))
for nota in notas:
    if nota < 0.0 or nota >10.0:
        print('Valor inválido. Tente novamente.')
        exit()
media = sum(notas)/len(notas)
print(f'A média das notas do aluno é: {media:.2f}pts')
# Exercício 11
while True:
    print('+--------------------------------+')
    print('| Calculadora de média de saltos |')
    print('+--------------------------------+')
    
    nome = input('Insira o nome do(a) atleta: ')
    if nome == '':
        print('\n+------ PROGRAMA ENCERRADO ------+\n')
        break

    saltos = []
    for i in range(5):
        salto = float(input(f'{i+1}º salto: '))
        saltos.append(salto)

    print('+---------- Resultados ----------+')
    print(f"Atleta: {nome}")
    print(f"Saltos: {' - '.join(map(str, saltos))}")
    print(f"Média dos saltos: {sum(saltos)/len(saltos):.2f} m")
    print(f"Pior salto: {min(saltos):.2f} m")
    print(f"Melhor salto: {max(saltos):.2f} m")
    print('+--------------------------------+\n')
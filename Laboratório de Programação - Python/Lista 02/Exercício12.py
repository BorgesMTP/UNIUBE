# Exercício 12
print('+-----------------------------------------------------------+')
print('| Qual o melhor sistema operacional para uso em servidores? |')
print('+-----------------------------------------------------------+')
print('| 1 - Windows Server                                        |')
print('| 2 - Unix                                                  |')
print('| 3 - Linux                                                 |')
print('| 4 - Netware                                               |')
print('| 5 - MacOS                                                 |')
print('| 6 - Outro                                                 |')
print('+-----------------------------------------------------------+')

opcoes = ['Windows Server', 'Unix', 'Linux', 'Netware', 'Mac OS', 'Outro']
votos = [0]*6

while True:
    voto = int(input('Vote 1 a 6 (0 para encerrar): '))
    if voto == 0:
        break
    if 1 <= voto <= 6:
        votos[voto-1] += 1
    else:
        print('Voto inválido.')


total = sum(votos)
print('+------------------------- Resultado -------------------------+')
for i, (opcao, qtd) in enumerate(zip(opcoes, votos)):
    percentual = (qtd / total) * 100 if total else 0
    print(f"{i+1} - {opcao}: {qtd} votos ({percentual:.2f}%)")

mais_votado = max(range(len(votos)), key=lambda i: votos[i])
print(f"Mais votado: {opcoes[mais_votado]}")


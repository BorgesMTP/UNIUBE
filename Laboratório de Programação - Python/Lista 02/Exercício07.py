# Exercício 07
votos = ["A", "B", "A", "C", "C", "A", "C", "C", "B", "A"]
resultado = {}
for voto in votos:
    resultado[voto] = resultado.get(voto, 0) + 1
print(resultado)
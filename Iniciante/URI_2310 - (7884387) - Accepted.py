n = int(input())

lista = [[0.0, 0.0], [0.0, 0.0], [0.0, 0.0]]

for i in range(n):
    nome = input()
    for j in range(2):
        linha = input().split(" ")
        s, b, a = linha
        lista[0][j] += float(s)
        lista[1][j] += float(b)
        lista[2][j] += float(a)

s = (lista[0][1] * 100) / lista[0][0]
b = (lista[1][1] * 100) / lista[1][0]
a = (lista[2][1] * 100) / lista[2][0]

print("Pontos de Saque: %0.2f %%." % s)
print("Pontos de Bloqueio: %0.2f %%." % b)
print("Pontos de Ataque: %0.2f %%." % a)
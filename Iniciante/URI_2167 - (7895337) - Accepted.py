n = int(input())

vetor = []

vetor = input().split(" ")

ant = vetor[0]
saida = 0

for i in range(1, n):
    vez = vetor[i]
    if int(vez) < int(ant):
        saida = i+1
        break
    ant = vez

print(saida)

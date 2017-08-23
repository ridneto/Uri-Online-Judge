saida = [0, 0]

for i in range(6):
    n = float(input())
    if n > 0:
        saida[0] += 1
        saida[1] += n

print("%d valores positivos" % saida[0])
print("%.1f" % (saida[1] / saida[0]))


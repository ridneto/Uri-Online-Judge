total = 0

for i in range(2):
    linha = input().split(" ")
    cod, qt, valor = linha
    total += int(qt) * float(valor)

print("VALOR A PAGAR: R$ %0.2f" % total)
salario = float(input())

if salario <= 2000:
    print("Isento")
else:
    if salario <= 3000:
        parte = salario - 2000
        saida = parte * 0.08
    elif salario <= 4500:
        parte = salario - 3000
        saida = 1000 * 0.08 + parte * 0.18
    else:
        parte = salario - 4500
        saida = 1000 * 0.08 + 1500 * 0.18 + parte * 0.28

    print("R$ %0.2f" % saida)
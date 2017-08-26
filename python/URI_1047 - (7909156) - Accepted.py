linha = input().split(" ")

ih = int(linha[0])
im = int(linha[1])
fh = int(linha[2])
fm = int(linha[3])

inicio = ih * 60 + im
final = fh * 60 + fm

if ih <= fh:
    d = final - inicio
    if d == 0:
        print("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)" % (d%60))
    else:
        h = int((d - d % 60) / 60)
        m = d % 60
        print("O JOGO DUROU",h,"HORA(S) E %d MINUTO(S)" % m)
else:
    d = 24 * 60 - inicio + final
    h = int((d - d % 60) / 60)
    m = int(d % 60)
    print("O JOGO DUROU",h,"HORA(S) E %d MINUTO(S)" % m)
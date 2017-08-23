while True:
    try:
        m = int(input())

        cima = baixo = 0
        for i in range(m):
            linha = input().split(" ")
            n, c = linha
            cima += int(n) * int(c)
            baixo += int(c)

        ira = cima / (baixo * 100.0)

        print("%0.4f" % ira)
    except:
        break
while True:
    try:
        n, idfaculdade = input().split(" ")

        pontos = 0
        for i in range(int(n)):
            idplay, jogo = input().split(" ")

            if idfaculdade == idplay and jogo == "0":
                pontos += 1

        print(pontos)
    except EOFError:
        break

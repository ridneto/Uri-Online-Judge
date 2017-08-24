doisterco = 2 / 3.0

while True:
    try:
        n = int(input())
        vetor = []
        vetor = input().split(' ')

        favor = 0

        for i in range(n):
            if vetor[i] == '1':
                favor += 1.0

        if favor / n >= doisterco:
            print("impeachment")
        else:
            print("acusacao arquivada")

    except EOFError:
        break
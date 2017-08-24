while True:
    try:
        n, amin, amax = input().split(" ")

        pode=0

        for i in range(int(n)):
            altura = int(input())

            if int(amin) <= altura <= int(amax):
                pode += 1

        print(pode)
    except EOFError:
        break


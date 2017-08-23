n = int(input())

for i in range(n):
    numero = input()
    index = 0
    leds = 0
    while index < len(numero):
        vez = numero[index]
        if vez == "1":
            leds += 2
        elif vez == "2" or vez == "3" or vez == "5":
            leds += 5
        elif vez == "4":
            leds += 4
        elif vez == "6" or vez == "9" or vez == "0":
            leds += 6
        elif vez == "7":
            leds += 3
        else:
            leds += 7
        index += 1
        
    print("%d leds" % leds)

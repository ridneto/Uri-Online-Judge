musicas = ["PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT",
           "ANSWER!", "RAR?", "WIFI ANTENNAS"]

n = int(input())

for i in range(n):
    linha = input()
    print(musicas[int(linha[0]) + int(linha[2])])
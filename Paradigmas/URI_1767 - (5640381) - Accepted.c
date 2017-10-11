#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define LMAX 101
#define CMAX 51
#define PESOMAX 50
#define MAIOR(a, b) a > b ? a : b

typedef struct{int brinquedos; int peso;}TSaco;

int main(){
	TSaco saco[LMAX];
	int i, j, v, pac, peso, qtdSacos, matriz[LMAX][CMAX];
	
	scanf("%d", &v);
	while(v--){
		scanf("%d", &pac);
		for(i=1; i<=pac; i++)
			scanf("%d %d", &saco[i].brinquedos, &saco[i].peso);
		
		for(i=0; i<=pac; i++)
			for(j=0; j<=PESOMAX; j++)
				if(!i || !j)
					matriz[i][j] = 0;
				else
					if(saco[i].peso > j)
						matriz[i][j] = matriz[i-1][j];
					else
						matriz[i][j] = MAIOR(matriz[i-1][j - saco[i].peso] + saco[i].brinquedos, matriz[i-1][j]);
		
		for(i=pac, j=PESOMAX, qtdSacos=0, peso=0; i>0; i--)
			if(matriz[i][j] != matriz[i-1][j]){
				qtdSacos++;
				peso+= saco[i].peso;
				if(j - saco[i].peso >= 0)
					j-= saco[i].peso;
			}
		
		printf("%d brinquedos\nPeso: %d kg\nsobra(m) %d pacote(s)\n\n", matriz[pac][PESOMAX], peso, pac - qtdSacos);			
	}
	return 0;
}

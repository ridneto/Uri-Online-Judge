#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define LMAX 101
#define CMAX 1001
#define MAIOR(a, b) a > b ? a : b

typedef struct{int enfeite; int peso;}TPacote;

int main(){
	TPacote pacote[LMAX];
	int i, j, g, gi, p, w, matriz[LMAX][CMAX];
		
	scanf("%d", &g);

	for(gi=1; gi<=g; gi++){
		scanf("%d %d", &p, &w);
		for(i=1; i<=p; i++)
			scanf("%d %d", &pacote[i].enfeite, &pacote[i].peso);
		
		for(i=0; i<=p; i++)
			for(j=0; j<=w; j++)
				if(!i || !j)
					matriz[i][j] = 0;
				else
					if(pacote[i].peso > j)
						matriz[i][j] = matriz[i-1][j];
					else
						matriz[i][j] = MAIOR(matriz[i-1][j - pacote[i].peso] + pacote[i].enfeite, matriz[i-1][j]);
		printf("Galho %d:\nNumero total de enfeites: %d\n\n", gi, matriz[p][w]);		
	}
	
	return 0;
}
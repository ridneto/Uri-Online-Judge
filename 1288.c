#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define LMAX 51
#define CMAX 101
#define MAIOR(a, b) a > b ? a : b

typedef struct{int poder; int peso;}TCanhao;

int main(){
	TCanhao canhao[LMAX];
	int matriz[LMAX][CMAX], n, p, v, i, j, castle;
	
	scanf("%d", &v);
	while(v--){
		scanf("%d", &n);
		for(i=1; i<=n; i++)
			scanf("%d %d", &canhao[i].poder, &canhao[i].peso);
		scanf("%d", &p);
		scanf("%d", &castle);
		
		for(i=0; i<=n; i++)
			for(j=0; j<=p; j++)
				if(!i || !j)
					matriz[i][j] = 0;
				else
					if(canhao[i].peso > j) 
						matriz[i][j] = matriz[i-1][j];
					else
						matriz[i][j] = MAIOR(matriz[i-1][j - canhao[i].peso] + canhao[i].poder, matriz[i-1][j]);
					
		if(matriz[n][p] >= castle)
			printf("Missao completada com sucesso\n");
		else
			printf("Falha na missao\n");
	}
	
	return 0;
}
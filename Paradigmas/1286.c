#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define LMAX 21
#define CMAX 31
#define MAIOR(a, b) a > b ? a : b

typedef struct{int tempo; int pizzas;}TPedido;

int main(){
	TPedido pedido[LMAX];
	int matriz[LMAX][CMAX], n, p, i, j;
	
	while(scanf("%d", &n) && n){
		scanf("%d", &p);
		for(i=1; i<=n; i++)
			scanf("%d %d", &pedido[i].tempo, &pedido[i].pizzas);
		
		for(i=0; i<=n; i++)
			for(j=0; j<=p; j++)
				if(!i || !j)
					matriz[i][j] = 0;
				else
					if(pedido[i].pizzas > j) 
						matriz[i][j] = matriz[i-1][j];
					else
						matriz[i][j] = MAIOR(matriz[i-1][j - pedido[i].pizzas] + pedido[i].tempo, matriz[i-1][j]);
					
		printf("%d min.\n", matriz[n][p]);
	}
	
	return 0;
}
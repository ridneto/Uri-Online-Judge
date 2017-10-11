#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 100

int main(){	
	int matriz[MAX][MAX], i, j, n, m, maior=0, vez;
	
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			scanf("%d", &matriz[i][j]);
	
	for(i=0, vez=0; i<n; i++){
		for(j=0; j<m; j++)
			vez+= matriz[i][j];
		if(maior < vez)
			maior = vez;
		vez=0;
	}		
	
	for(i=0, vez=0; i<m; i++){
		for(j=0; j<n; j++)
			vez+= matriz[j][i];
		if(maior < vez)
			maior = vez;
		vez=0;
	}
	
	printf("%d\n", maior); 
	
	return 0;
}

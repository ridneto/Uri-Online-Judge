#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX 1000001
#define TRUE 1
#define FALSE 0
#define MENOR(a, b) a < b ? a : b

int cartas[2][MAX];

int main(){	
	
	int qnt[2], troca[2], e, i, j, maior;
	
	while(scanf("%d %d", &qnt[0], &qnt[1]) && qnt[0] && qnt[1]){
		for(i=0; i<2; i++)
			memset(cartas[i], FALSE, MAX);
		
		for(i=0, maior=0; i<2; i++)
			for(j=0; j<qnt[i]; j++){
				scanf("%d", &e);
				cartas[i][e] = TRUE;
				if(maior < e)
					maior = e;
			}
		
		for(i=0, e=1; i<2; i++, e=-1)
			for(j=1, troca[i] = 0; j<=maior; j++)
				if(cartas[i][j] && !cartas[i+e][j])
					troca[i]++;					
		
		printf("%d\n", MENOR(troca[0], troca[1]));		
	} 
	
	return 0;
}


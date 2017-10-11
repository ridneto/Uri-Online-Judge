#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define FIRE 'F'
#define CONTADO 'C'
#define NAVIO '#'
#define MAX 101
#define TRUE 1
#define FALSE 0

int n, m;
char matriz[MAX][MAX];
char contaNavio(int, int);

int main(){

	int i, j, l, c, d=0;
	scanf("%d %d", &n, &m);
	
	for(i=0; i<n; i++)
		scanf("%s", matriz[i]);
	
	scanf("%d", &j);
	
	for(i=0; i<j; i++){
		scanf("%d %d", &l, &c);
		if(matriz[l-1][c-1] == NAVIO)
			matriz[l-1][c-1] = FIRE;
	}
	
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			if(matriz[i][j] == FIRE)
				if(contaNavio(i, j))
					d++;
	
	printf("%d\n", d);
	
	return 0;
}

char contaNavio(int l, int c){
	
	char valido = TRUE;
	matriz[l][c] = CONTADO;
	
	if(l-1 >= 0){
		if(matriz[l-1][c] == NAVIO)
			valido = FALSE;
		else
			if(matriz[l-1][c] == FIRE)
				valido = (contaNavio(l-1, c) && valido);
	}
	
	if(l+1 < n){
		if(matriz[l+1][c] == NAVIO)
			valido = FALSE;
		else
			if(matriz[l+1][c] == FIRE)
				valido = (contaNavio(l+1, c) && valido);
	}
	
	if(c-1 >= 0){
		if(matriz[l][c-1] == NAVIO)
			valido = FALSE;
		else
			if(matriz[l][c-1] == FIRE)
				valido = (contaNavio(l, c-1) && valido);
	}
	
	if(c+1 < m){
		if(matriz[l][c+1] == NAVIO)
			valido = FALSE;
		else
			if(matriz[l][c+1] == FIRE)
				valido = (contaNavio(l, c+1) && valido);
	}	
	
	return valido;
}

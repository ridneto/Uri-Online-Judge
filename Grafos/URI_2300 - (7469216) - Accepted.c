#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0
#define MAX 100

int bfs(int);

int arestas[MAX][MAX];
char vertices[MAX];

int main(){
	
	int e, l, i, j, x, y, q=0;
	
	while(scanf("%d %d", &e, &l) && e && l){
		for(i=0; i<e; i++){
			arestas[i][0] = 0;
			vertices[i] = FALSE;
		}
		
		for(i=0; i<l; i++){
			scanf("%d %d", &x, &y);
			
			arestas[x-1][++arestas[x-1][0]]	= y-1;
			arestas[y-1][++arestas[y-1][0]] = x-1;
		}
		
		printf("Teste %d\n", ++q);
		if(bfs(0) == e)
			printf("normal\n\n");
		else
			printf("falha\n\n");
	}
	
	
	return 0;
}

int bfs(int v){
	int n, q, qt=1, f=0, i=0, fila[MAX];
	
	vertices[v] = TRUE;
	fila[f++] = v;
	
	while(f != i){
		n = fila[i++];
		for(q=1; q<=arestas[n][0]; q++)
			if(!vertices[arestas[n][q]]){
				fila[f++] = arestas[n][q];
				vertices[arestas[n][q]] = TRUE;
				qt++; 
			}
	}
	
	return qt;
}
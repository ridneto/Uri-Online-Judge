#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE  1
#define FALSE 0
#define MAX   10000

char arestas[MAX][MAX], vertices[MAX];

int dfs(int, int);

int main(){
	
	int v, e, i, j, x, y;
	
	while(scanf("%d %d", &v, &e) != EOF){
		
		for(i=0; i<v; i++)
			for(j=0; j<v; j++)
				arestas[i][j] = FALSE;
		
		
		for(i=0; i<e; i++){
			scanf("%d %d", &x, &y);
			
			arestas[x-1][y-1] = arestas[y-1][x-1] = TRUE;
		}		
		
		scanf("%d", &i);
		
		memset(vertices, FALSE, sizeof(vertices));
		
		printf("%d\n", dfs(i-1, v));
	}
	
	return 0;
}

int dfs(int v, int qtMax){
	short int j, qt=1;
	
	vertices[v] = TRUE;
	
	for(j=0; j<qtMax; j++)
		if(arestas[v][j] && !vertices[j])
			qt += dfs(j, qtMax);
			
	return qt;
}
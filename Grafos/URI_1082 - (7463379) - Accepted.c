#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE 1
#define FALSE 0
#define MAX 26

void dfs(int);

char arestas[MAX][MAX], vertices[2][MAX];
int v, e;

int main(){
	
	int in, n, i, j, p;
	char x, y;
	
	scanf("%d", &n);
	
	for(in=1; in<=n; in++){
		
		scanf("%d %d ", &v, &e);
		
		memset(arestas, FALSE, sizeof(arestas));
		
		for(i=0; i<e; i++){
			scanf(" %c %c", &x, &y);
			arestas[x - 'a'][y - 'a'] = TRUE;
			arestas[y - 'a'][x - 'a'] = TRUE;
		}
			
		printf("Case #%d:\n", in);
		
		memset(vertices[0], FALSE, sizeof(vertices[0]));
		
		for(i=0, p=0; i<v; i++){			
			if(!vertices[0][i]){
				memset(vertices[1], FALSE, sizeof(vertices[1]));
				dfs(i);
				
				for(j=i, p++; j<v; j++)
					if(vertices[1][j])
						printf("%c,", j +  'a');
				printf("\n");
			}
		}
		printf("%d connected components\n\n", p);
	}
	
	return 0;
}

void dfs(int i){
	int j;

	vertices[0][i] = vertices[1][i] = TRUE;	
	
	for (j = 0; j < v; j++)		
		if (arestas[i][j])		
			if (!vertices[0][j])	
				dfs(j);	
}
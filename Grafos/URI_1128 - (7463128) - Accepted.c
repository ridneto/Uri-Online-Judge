#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

#define QTD_VERTICES 2000

int bfs();
void inverte();

char arestas[QTD_VERTICES][QTD_VERTICES],
		vertices[QTD_VERTICES];
int n, m;
		
int main(){
	int i, j, v, w, p;

	while(scanf("%d %d", &n, &m) && n && m){
		memset(arestas, 0, sizeof(arestas));
		
		for(i=0; i<m; i++){
			scanf("%d %d %d", &v, &w, &p);
			
			arestas[v-1][w-1] = 1;
			if(p == 2){
				arestas[w-1][v-1] = 2;
				arestas[v-1][w-1] = 2;
			}
		}
				
		memset(vertices, 0, sizeof(vertices));
		i = bfs(n);
		
		if(i == n){
			inverte();
			memset(vertices, 0, sizeof(vertices));
			i = bfs();
		}
		
		if(i == n)
			printf("1\n");
		else
			printf("0\n"); 
		
	}
	return 0;
}

int bfs(){
	int j, c, qtd, f=0, i=0, fila[QTD_VERTICES];

	vertices[0] = 1;	
	fila[f++] = 0;		
	qtd = 1;				
	
	while (f != i)		
	{	j = fila[i++];
		for (c = 0; c < n; c++){
			if (arestas[c][j]) 	
				if (!vertices[c]){
					fila[f++] = c;
					vertices[c] = 1;
					qtd++;
				}	
		}
	}
	
	return qtd;	
}

void inverte(){
	int i, j;
	
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			if(arestas[i][j] == 1){
				arestas[i][j] = 0;
				arestas[j][i] = 2;
			}
	
}

void imprimi(){
	int i, j;
	
	printf("Matriz formada na memoria:\n");
	
	for(i=0; i<n; i++){
		for(j=0; j<n; j++)
			printf("%d ", arestas[i][j]);
		printf("\n");
	}
	
	printf("Fim da Matriz\n\n");
}
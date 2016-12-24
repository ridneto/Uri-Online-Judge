#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_ARESTAS 250000
#define MAX_VERTICES 500
#define INFINITO 30000

char vertices[MAX_VERTICES];
short int arestas[MAX_VERTICES][MAX_ARESTAS];

int dijkstra(int, int, int);

int main(){
	
	int v, a, o, d, p, i, j, c, dist;
	
	while(scanf("%d %d", &v, &a) && v){
		for(i=0;i<v;i++)
			for(j=0;j<v;j++)
				arestas[i][j] = INFINITO;
		for(i=0;i<a;i++){
			scanf("%d %d %d", &o, &d, &p);
			if(arestas[d-1][o-1] != INFINITO){
				arestas[d-1][o-1] = 0;
				arestas[o-1][d-1] = 0;
			}else
				arestas[o-1][d-1] = p;
		}
		scanf("%d", &c);
		while(c--){
			scanf("%d %d", &o, &d);
			dist = dijkstra(v, o-1, d-1);
			if(dist != INFINITO)
				printf("%d\n", dist);
			else
				printf("Nao e possivel entregar a carta\n");
		}
		printf("\n");
	}
	
	return 0;
}

int dijkstra(int v, int o, int d){
	int distancias[MAX_VERTICES], i, j, menor, proximo;
	
	memset(vertices, FALSE, v);	
	for(i=0;i<v;i++)
		distancias[i] = INFINITO;	
	distancias[o] = 0;
	for(i=0;i<v;i++){
		menor = INFINITO;
		for(j=0;j<v;j++)
			if(!vertices[j] && distancias[j] < menor){
				menor = distancias[j];
				proximo = j;
			}
		vertices[proximo] = TRUE;
		
		for(j=0;j<v;j++)
			if(arestas[proximo][j] != INFINITO)
				if(distancias[proximo] + arestas[proximo][j] < distancias[j])
					distancias[j] = distancias[proximo] + arestas[proximo][j];
	}
	return distancias[d];
}









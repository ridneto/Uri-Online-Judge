#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARESTA 50000
#define MAX_VERTICE 40000
#define MAIOR(a, b) a > b ? a : b

typedef struct{int x, y, peso;}TAresta;
TAresta aresta[MAX_ARESTA];
int idComp[MAX_VERTICE], tamComp[MAX_VERTICE];

long int Kruskal(int, int);
int compara(const void *, const void *);

// Usando o Quick Union;

int main(){
	int v, a, i;
	
	while(scanf("%d %d", &v, &a) && v && a){
		for(i=0; i<a; i++)
			scanf("%d %d %d", &aresta[i].x, &aresta[i].y, &aresta[i].peso);			
		
		printf("%ld\n", Kruskal(v, a));
	}
	return 0;
}

long int Kruskal(int qtVertices, int qtAresta){
	long int pt=0;
	int i, c1, c2;
	
	qsort(aresta, qtAresta, sizeof(TAresta), compara);
	for(i=0; i<qtVertices; i++){
		idComp[i] = i;
		tamComp[i] = 1;
	}
	
	for(i=0; i<qtAresta; i++){
		for(c1 = aresta[i].x; c1 != idComp[c1]; c1 = idComp[c1]);
		for(c2 = aresta[i].y; c2 != idComp[c2]; c2 = idComp[c2]);
		
		if(c1 != c2){
			pt += aresta[i].peso;
			
			if (tamComp[c1] < tamComp[c2])
			{	idComp[c1] = c2;
				tamComp[c2] += tamComp[c1];
			}
			else
			{	idComp[c2] = c1;
				tamComp[c1] += tamComp[c2];
			}
		}
	}
	
	return pt;
}

int compara(const void *p1, const void *p2){
	TAresta *i = (TAresta *)p1, *j = (TAresta *)p2;
	
	if(i->peso > j->peso)
		return 1;
	else
		if(i->peso < j->peso)
			return -1;
		else
			return 0;
}
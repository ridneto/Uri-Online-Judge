#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_POKEDEX 151
#define MAX_NOME 1001
#define VAZIO -1

int main(){		
	
	char pokedex[MAX_POKEDEX][MAX_NOME], vez[MAX_NOME];
	int i, n, topo=VAZIO, qtd=1;	
	scanf("%d", &n);
	while(n--){
		scanf("%s", vez);
		if(topo == VAZIO)
			strcpy(pokedex[++topo], vez);
		else{
			for(i=0;i<=topo;i++)
				if(!strcmp(pokedex[i],vez))
					break;
			if(i>topo){
				strcpy(pokedex[++topo], vez);
				qtd++;
			}		
		}
	}
	printf("Falta(m) %d pomekon(s).\n", MAX_POKEDEX - qtd);
	
	return 0;
}

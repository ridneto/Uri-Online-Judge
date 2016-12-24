#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 100
 
typedef struct{char nome[MAX]; int pref; double preco;}TBrinquedo;

int compara(const void *, const void *);
 
int main(){	
		
	TBrinquedo lista[MAX];
	char crianca[MAX];
	int i, j, qnt;
	
	while(scanf(" %s %d ", crianca, &qnt) != EOF){
		for(i=0; i<qnt; i++){
			fgets(lista[i].nome, MAX, stdin);
			for(j=0; lista[i].nome[j] >= ' '; j++);
			lista[i].nome[j] = '\0';
			scanf("%lf %d ", &lista[i].preco, &lista[i].pref);
		}
		qsort(lista, qnt, sizeof(TBrinquedo), compara);
		printf("Lista de %s\n", crianca);
		for(i=0; i<qnt; i++)
			printf("%s - R$%.2lf\n", lista[i].nome, lista[i].preco);
		printf("\n");
	}
	
	return 0;
}

int compara(const void *p1, const void *p2){
	TBrinquedo *i = (TBrinquedo *)p1, *j = (TBrinquedo *)p2;
	if(i->pref > j->pref)
		return -1;
	else
		if(i->pref < j->pref)
			return 1;
		else
			if(i->preco > j->preco)
				return 1;
			else
				if(i->preco < j->preco)
					return -1;
				else
					return strcmp(i->nome, j->nome);				
}		

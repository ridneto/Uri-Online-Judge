#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_LISTA 100
#define MAX_NOME 21
typedef struct{char nome[MAX_NOME];}TCrianca;

int compara(const void *, const void *);

int main(){
	
	int n, bad, good, i;
	char c;
	TCrianca vetor[MAX_LISTA];
	
	scanf(" %d ", &n);
	
	for(i=0, bad=0, good=0; i<n; i++){
		scanf(" %c %s ", &c, vetor[i].nome);
		if(c == '+')
			good++;
		else
			bad++;
	}
	
	qsort(vetor, n, sizeof(TCrianca), compara);
	
	for(i=0; i<n; i++)
		printf("%s\n", vetor[i].nome);
	printf("Se comportaram: %d | Nao se comportaram: %d\n", good, bad);
	
	return 0;
}

int compara(const void *p1, const void *p2){
	TCrianca *i = (TCrianca *)p1, *j = (TCrianca *)p2;
	
	return strcmp(i->nome, j->nome);
}

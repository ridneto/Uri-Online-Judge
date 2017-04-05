#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_LISTA 100000
#define MAX_NOME 50

typedef struct{char nome[MAX_NOME], amigo; int tam;}TAmigo;

int compara(const void *, const void *);
TAmigo vetor[MAX_LISTA];

int main(){	
	
	TAmigo winner;
	char resp[5], nome[MAX_NOME];
	int i, n=0;
	winner.tam = 0;
	
	while(1){
		scanf(" %s %s ", nome, resp);	
		if(strcmp(nome, "FIM") == 0)
			break;
		
		strcpy(vetor[n].nome, nome);
		vetor[n].tam = strlen(vetor[n].nome);
		if(strcmp(resp, "YES") == 0){
			vetor[n].amigo = 1;
			if(vetor[n].tam > winner.tam){
				winner.tam = vetor[n].tam;
				strcpy(winner.nome, vetor[n].nome);
			}
		}else
			vetor[n].amigo = 0;
		n++;
	}

	qsort(vetor, n, sizeof(TAmigo), compara);
	
	printf("%s\n", vetor[0].nome);
	for(i=1; i<n; i++)
		if(strcmp(vetor[i].nome, vetor[i-1].nome) != 0)
			printf("%s\n", vetor[i].nome);
	printf("\nAmigo do Habay:\n");
	printf("%s\n", winner.nome);

	return 0;
}

int compara(const void *p1, const void *p2){
	TAmigo *i = (TAmigo *)p1, *j = (TAmigo *)p2;
	
	if(i->amigo > j->amigo)
		return -1;
	else if(i->amigo < j->amigo)
		return 1;
	else
		return strcmp(i->nome, j->nome);
}
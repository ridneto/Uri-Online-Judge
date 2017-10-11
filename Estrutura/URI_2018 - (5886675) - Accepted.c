#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX 300

typedef struct{char nome[MAX]; int medalhas[3];}TPais;

void atualizaQuadro(TPais *, int *, char *, int);
int compara(const void *, const void *);

int main(){	
	
	TPais quadro[MAX];
	char nome[MAX];
	int qnt=0, i, j;
	
	while(fgets(nome, MAX, stdin) != NULL)
		for(i=0; i<3; i++){
			fgets(nome, MAX, stdin);
			atualizaQuadro(quadro, &qnt, nome, i);
		}	

	qsort(quadro, qnt, sizeof(TPais), compara);
	
	printf("Quadro de Medalhas\n");
	for(i=0; i<qnt; i++){
		printf("%s", quadro[i].nome);
		for(j=0; j<3; j++)
			printf(" %d", quadro[i].medalhas[j]);
		printf("\n");
	}
	
	return 0;
}


void atualizaQuadro(TPais *quadro, int *qnt, char *nome, int medalha){
	int i, j;
	
	for(i=0; nome[i] >= 32; i++);
	nome[i] = '\0';
	
	for(i=0; i<*qnt && strcmp(quadro[i].nome, nome) != 0; i++);
	
	if(i==*qnt){
		*qnt = *qnt + 1;
		strcpy(quadro[i].nome, nome);
		for(j=0; j<3; j++)
			quadro[i].medalhas[j] = 0;		
	}
	quadro[i].medalhas[medalha]++;
}

int compara(const void *p1, const void *p2){
	TPais *i = (TPais *)p1, *j = (TPais *)p2;
	
	if(i->medalhas[0] > j->medalhas[0])
		return -1;
	else
		if(i->medalhas[0] < j->medalhas[0])
			return 1;
		else
			if(i->medalhas[1] > j->medalhas[1])
				return -1;
			else
				if(i->medalhas[1] < j->medalhas[1])
					return 1;
				else
					if(i->medalhas[2] > j->medalhas[2])
						return -1;
					else
						if(i->medalhas[2] < j->medalhas[2])
							return 1;
						else
							return strcmp(i->nome, j->nome);
}
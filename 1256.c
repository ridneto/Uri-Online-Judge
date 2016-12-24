#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100

typedef struct no{struct no *prox; int valor;}TNo;
typedef struct{TNo *inicio, *final;}TDes;

void inicializa(TDes *, int);
void insereNo(TDes *, int, int);
void imprimiHash(TNo *, int);

int main(){
	TDes vetor[MAX];
	int key, num, n, e, i, j;
	
	scanf("%d", &n);
	
	for(j=0; j<n; j++){	
		scanf("%d %d", &key, &num);
		inicializa(vetor, key);
		
		for(i=0; i<num; i++){
			scanf("%d", &e);
			insereNo(vetor, e % key, e);
		}
		for(i=0; i<key; i++)
			imprimiHash(vetor[i].inicio, i);	
		if(j + 1 < n)
			printf("\n");
	}
	return 0;
}

void imprimiHash(TNo *inicio, int ind){
	TNo *aux = inicio;
	printf("%d -> ", ind);
	while(aux != NULL){
		printf("%d -> ", aux->valor);
		aux = aux->prox;
	}		
	printf("\\");
	printf("\n");
}

void insereNo(TDes *vetor, int ind, int e){
	TNo *aux = (TNo *)malloc(sizeof(TNo));
	aux->valor = e;
	aux->prox = NULL;
	if(vetor[ind].inicio == NULL)
		vetor[ind].inicio = aux;
	else
		vetor[ind].final->prox = aux;
	vetor[ind].final = aux;
}

void inicializa(TDes *vetor, int n){
	int i;
	for(i=0; i<n; i++){
		vetor[i].inicio = NULL;
		vetor[i].final = NULL;
	}
}
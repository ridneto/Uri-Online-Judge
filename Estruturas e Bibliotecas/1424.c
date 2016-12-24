#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX 1000000

typedef struct no{struct no *prox; int v;}TNo;
typedef struct{TNo *inicio, *final; int qnt;}TDes;

void inicializa();
void insereLista(int, int);
void imprimi(int, int);
TDes d[MAX];

int main(){
	
	int n, m, i, e;
	
	while(scanf("%d %d", &n, &m) == 2){
		inicializa();
		for(i=0; i<n; i++){
			scanf("%d", &e);
			insereLista(e-1, i);
		}
		while(m--){
			scanf("%d %d", &i, &e);
			imprimi(e-1, i);
		}
	}
	
	return 0;
}

void imprimi(int ind, int no){
	TNo *aux = d[ind].inicio;
	int i=1;
	
	if(d[ind].qnt < no || d[ind].inicio == NULL)
		printf("0\n");
	else{
		while(i < no){
			aux = aux->prox;
			i++;
		}	
		printf("%d\n", aux->v);
	}
	
}

void insereLista(int ind, int valor){
	TNo *aux = (TNo *)malloc(sizeof(TNo));
	aux->v = valor + 1;
	aux->prox = NULL;
	if(d[ind].inicio == NULL)
		d[ind].inicio = aux;
	else
		d[ind].final->prox = aux;
	d[ind].final = aux;
	d[ind].qnt++;
}

void inicializa(){
	int i;
	
	for(i=0; i<MAX; i++){
		d[i].inicio = NULL;
		d[i].final = NULL;
		d[i].qnt = 0;
	}
}
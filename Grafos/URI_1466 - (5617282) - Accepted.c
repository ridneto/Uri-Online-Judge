#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 500

struct regNo{ struct regNo *esq; int valor; struct regNo *dir;};
typedef struct regNo TNo;
typedef struct{TNo *raiz;}tDesc;

TNo *fila[MAX][MAX];
int qntFila[MAX + 1];

TNo *AchaPai(TNo *, int);
void DefineNivel(TNo *, int);
void IncluiNoh(tDesc *, int);
void inicializa(tDesc *, int);
void Imprimi();

int main(){ 	
	int valor, n, qnt, i, j;
	tDesc d;
	
	scanf("%d", &n);	
	for(j=0; j<n;){		
		scanf("%d", &qnt);
		inicializa(&d, qnt);
		for(i=0; i < qnt; i++){
			scanf("%d", &valor);
			IncluiNoh(&d, valor);
		}
		DefineNivel(d.raiz, 0);
		printf("Case %d:\n", ++j);
		Imprimi();
	}
	return 0;
}

void DefineNivel(TNo *r, int nivel){
	if(r != NULL){
		fila[nivel][qntFila[nivel]++] = r;
		DefineNivel(r->esq, nivel+1);
		DefineNivel(r->dir, nivel+1);
	}
}

void Imprimi(){
	int j, i=1;
	
	printf("%d", fila[0][0]->valor);
	while(qntFila[i]){
		for(j=0; j < qntFila[i]; j++)
			printf(" %d", fila[i][j]->valor);
		i++;
	}
	printf("\n\n");
}

void inicializa(tDesc *d, int qnt){
	d->raiz = NULL;
	memset(qntFila, 0, MAX + 1);
}

void IncluiNoh(tDesc *d, int valor){
	TNo *aux, *pai;
	
	aux = (TNo *) malloc(sizeof(TNo));
	aux->valor = valor;
	aux->dir = NULL;
	aux->esq = NULL;	
	pai = AchaPai(d->raiz, valor);
	if(pai == NULL)
		d->raiz = aux;
	else
		if(valor <= pai->valor )
			pai->esq = aux;
		else
			pai->dir = aux;
}

TNo *AchaPai(TNo *r, int n){ 
	if( r == NULL )
		return NULL;
	else
		if( n <= r->valor )
	/* n é descendente do lado esquerdo de r */
			if( r->esq == NULL )
				return r;
			else
				return AchaPai( r->esq, n );
		else
	/* n é descendente do lado direito de r */
			if( r->dir == NULL )
				return r;
			else
				return AchaPai( r->dir, n );
}
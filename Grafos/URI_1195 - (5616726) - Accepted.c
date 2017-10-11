#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct regNo{ struct regNo *esq; int valor; struct regNo *dir;};
typedef struct regNo TNo;
typedef struct{TNo *raiz;}tDesc;

TNo *AchaPai( TNo *r, int n );
void ImprimeArvore(TNo *, int);
void IncluiNoh(tDesc *, int);
void inicializa(tDesc *);

int main(){ 
	
	int valor, n, qnt, i, j;
	tDesc d;
	
	scanf("%d", &n);	
	for(j=0; j<n;){
		inicializa(&d);
		scanf("%d", &qnt);
		for(i=0; i < qnt; i++){
			scanf("%d", &valor);
			IncluiNoh(&d, valor);
		}				
		printf("Case %d:\n", ++j);
		printf("Pre.:");
		ImprimeArvore(d.raiz, 0);
		printf("\n");
		printf("In..:");
		ImprimeArvore(d.raiz, 1);
		printf("\n");
		printf("Post:");
		ImprimeArvore(d.raiz, 2);
		printf("\n\n");
	}
	return 0;
}

void ImprimeArvore(TNo *r, int i){
	if( r != NULL ){
		if(i == 0){
			printf(" %d", r->valor);
			ImprimeArvore(r->esq, i);
			ImprimeArvore(r->dir, i);
		}else
			if(i == 1){				
				ImprimeArvore(r->esq, i);
				printf(" %d", r->valor);
				ImprimeArvore(r->dir, i);
			}else{
				ImprimeArvore(r->esq, i);				
				ImprimeArvore(r->dir, i);
				printf(" %d", r->valor);
			}
	}
}

void inicializa(tDesc *d){
	d->raiz = NULL;
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
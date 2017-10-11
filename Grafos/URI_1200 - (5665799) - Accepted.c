#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct regNo{struct regNo *esq; char valor; struct regNo *dir;};
typedef struct regNo TNo;
typedef struct{TNo *raiz;}TDesc;

void inFixa(TNo *);
void preFixa(TNo *);
void posFixa(TNo *);

void IncluiNoh(TDesc *, char);
TNo *AchaPai(TNo *, char);
void inicializa(TDesc *);
int Pesquisa(TNo *, char);

int FLAG;

int main(){ 	
	char comando[8], v;
	TDesc d;
	inicializa(&d);
	
	while(scanf(" %s ", comando) != EOF){
		if(strcmp(comando,"I") == 0){		
			scanf(" %c ", &v);
			IncluiNoh(&d, v);
		}else
			if(strcmp(comando, "P") == 0){
				scanf(" %c ", &v);
				if(Pesquisa(d.raiz, v))
					printf("%c existe\n", v);
				else
					printf("%c nao existe\n", v); 
			}else{
				if(!strcmp(comando, "INFIXA"))
					inFixa(d.raiz);
				else
					if(!strcmp(comando, "PREFIXA"))
						preFixa(d.raiz);
					else
						posFixa(d.raiz);
				printf("\n");	
				FLAG=0;
			}	
	}		
	
	return 0;
}

int Pesquisa(TNo *r, char valor){
	if(r == NULL)
		return 0;
	else
		if(r->valor == valor)
			return 1;
		else
			return Pesquisa(r->esq, valor) + Pesquisa(r->dir, valor);		
}

void inicializa(TDesc *d){
	d->raiz = NULL;
	FLAG=0;
}

void IncluiNoh(TDesc *d, char valor){
	TNo *aux, *pai;
	
	aux = (TNo *) malloc(sizeof(TNo));
	aux->dir = NULL;
	aux->esq = NULL;	
	aux->valor = valor;	
	pai = AchaPai(d->raiz, valor);
	if(pai == NULL)
		d->raiz = aux;
	else
		if(valor <= pai->valor )
			pai->esq = aux;
		else
			pai->dir = aux;
}

TNo *AchaPai(TNo *r, char n){ 
	if( r == NULL )
		return NULL;
	else
		if( n <= r->valor )
			if( r->esq == NULL )
				return r;
			else
				return AchaPai( r->esq, n );
		else
			if( r->dir == NULL )
				return r;
			else
				return AchaPai( r->dir, n );
}

void preFixa(TNo *r){
	if(r != NULL){
		if(FLAG)
			printf(" %c", r->valor);
		else{
			printf("%c", r->valor);
			FLAG++;
		}
		preFixa(r->esq);		
		preFixa(r->dir);		
	}
}

void posFixa(TNo *r){
	if(r != NULL){
		posFixa(r->esq);		
		posFixa(r->dir);
		if(FLAG)
			printf(" %c", r->valor);
		else{
			printf("%c", r->valor);
			FLAG++;
		}
	}
}

void inFixa(TNo *r){
	if(r != NULL){
		inFixa(r->esq);
		if(FLAG)
			printf(" %c", r->valor);
		else{
			printf("%c", r->valor);
			FLAG++;
		}
		inFixa(r->dir);
	}
}
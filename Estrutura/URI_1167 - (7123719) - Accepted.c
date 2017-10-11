#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 35
#define MAX_CRIANCA 100
#define TRUE 1
#define FALSE 0

typedef struct no{struct no *horario, *anthorario; char nome[MAX_NOME]; int num;}TNo;
typedef struct{TNo *inicio, *final; int num;}TDesc;

void inicia(TDesc *);
void addNo(TDesc*, char *, int);
void conectaExtremos(TDesc *);
void imprimiCirculo(TDesc *);
void geraVencedor(TDesc *, int);

int main(){
	
	TDesc d;
	char nome[MAX_NOME];
	int n, i, num;
	
	while(scanf("%d", &n) && n){
		
		inicia(&d);
		
		for(i=0; i<n; i++){
			scanf("%s %d", nome, &num);
			addNo(&d, nome, num);
		}
		conectaExtremos(&d);
		
		//imprimiCirculo(&d);
		
		geraVencedor(&d, n);
			
		printf("Vencedor(a): %s\n", d.inicio->nome);
	}
	
	return 0;
}

void geraVencedor(TDesc *d, int n){
	TNo *aux = d->inicio; 
	int i, j, num;
	
	for(i=0, n-=1; i<n; i++){
		//printf("Inicio na: %d %s\n", aux->num, aux->nome);
		num = aux->num;
		if(num%2)
			for(j=0; j<num; j++)
				aux = aux->anthorario;			
		else
			for(j=0; j<num; j++)
				aux = aux->horario;
				
		aux->horario->anthorario = aux->anthorario;
		aux->anthorario->horario = aux->horario;		
		//printf("Termino na: %s %d mov %d\n\n", aux->nome, aux->num, i);		
	}
	d->inicio = aux->anthorario;
}

void imprimiCirculo(TDesc *d){
	TNo *aux = d->inicio;	
	
	while(TRUE){
		printf("%s %d\n", aux->nome, aux->num);
		aux = aux->anthorario;
		
		if(aux == d->inicio || aux == NULL)
			break;
	}
}

void conectaExtremos(TDesc *d){
	d->inicio->horario = d->final;
	d->final->anthorario = d->inicio;
}

void addNo(TDesc *d, char nome[], int num){
	TNo *aux = (TNo *)malloc(sizeof(TNo));
	aux->num = num;
	strcpy(aux->nome, nome);
	
	if(d->inicio == NULL){
		aux->horario = NULL;
		d->inicio = aux;
		d->num = num;
	}else{
		aux->horario = d->final;
		d->final->anthorario = aux;
	}
	d->final = aux;
}

void inicia(TDesc *d){
	d->inicio = NULL;
	d->final = NULL;
}
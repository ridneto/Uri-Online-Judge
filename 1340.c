#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000
#define VAZIO -1

typedef struct{int pilha, Ifila, Ffila, Qfila, FilaPr, ehPilha, ehFila, ehFilaPr;}TDesc;

void inicializa(TDesc *);

void push(TDesc *, int *, int);
void pop(TDesc *, int *, int);

void insereFila(TDesc *, int *, int);
void removeFila(TDesc *, int *, int);

void insereFilaPr(TDesc *, int *, int);
void removeFilaPr(TDesc *, int *, int);
int compara(const void *, const void *);

int continua(TDesc *);

int main(){
	
	int pilha[MAX], fila[MAX], filaPr[MAX], in[MAX][2], n, i;
	TDesc d;
	
	while(scanf("%d", &n) != EOF){
		inicializa(&d);
		
		for(i=0; i<n; i++)
			scanf("%d %d", &in[i][0], &in[i][1]);
		
		for(i=0; i<n && continua(&d); i++){			
			if(in[i][0] == 1){
				if(d.ehPilha)
					push(&d, pilha, in[i][1]);
				if(d.ehFila)
					insereFila(&d, fila, in[i][1]);
				if(d.ehFilaPr)
					insereFilaPr(&d, filaPr, in[i][1]);
			}else{
				if(d.ehPilha)
					pop(&d, pilha, in[i][1]);
				if(d.ehFila)
					removeFila(&d, fila, in[i][1]);
				if(d.ehFilaPr)
					removeFilaPr(&d, filaPr, in[i][1]);
			}
		}		
		
		if(!(d.ehFila + d.ehFilaPr + d.ehPilha))
			printf("impossible\n");
		else
			if((d.ehFila + d.ehFilaPr + d.ehPilha) > 1)
				printf("not sure\n");
			else
				if(d.ehPilha)
					printf("stack\n");
				else
					if(d.ehFila)
						printf("queue\n");
					else
						printf("priority queue\n");
	}
	
	return 0;
}

void removeFilaPr(TDesc *d, int *filaPr, int v){
	if(d->FilaPr < 0)
		d->ehFilaPr = 0;
	else{
		qsort(filaPr, d->FilaPr + 1, sizeof(int), compara);
		if(filaPr[d->FilaPr] == v)
			d->FilaPr--;
		else
			d->ehFilaPr = 0;
	}		
}

void removeFila(TDesc *d, int *fila, int v){
	if(!d->Qfila || fila[d->Ifila] != v)
		d->ehFila = 0;
	else{
		d->Qfila--;
		if(d->Qfila)
			d->Ifila++;
	}		
}

void pop(TDesc *d, int *pilha, int v){
	if(d->pilha == VAZIO || pilha[d->pilha] != v)
		d->ehPilha = 0;
	else
		d->pilha--;
}

int compara(const void *p1, const void *p2){
	int *i = (int *)p1, *j = (int *)p2;
	if(*i > *j)
		return 1;
	else
		if(*i < *j)
			return -1;
		else
			return 0;
}

void insereFilaPr(TDesc *d, int *filaPr, int v){
	filaPr[++d->FilaPr] = v;
}

void insereFila(TDesc *d, int *fila, int v){
	if(!d->Qfila)
		d->Ifila++;
	fila[++d->Ffila] = v;
	d->Qfila++;
}

void push(TDesc *d, int *pilha, int v){
	pilha[++d->pilha] = v;
}

void inicializa(TDesc *d){
	d->pilha = VAZIO;
	d->Ifila = VAZIO;
	d->FilaPr = VAZIO;
	d->Ffila = VAZIO;
	d->Qfila = 0;
 	d->ehFila = 1;
	d->ehFilaPr = 1;
	d->ehPilha = 1;
}

int continua(TDesc *d){
	if(d->ehPilha || d->ehFila || d->ehFilaPr)
		return 1;
	else
		return 0;
}
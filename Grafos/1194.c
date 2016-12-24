#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 2001

typedef struct no{struct no *esq; struct no *dir; char valor;}TNo;

int indPre;
TNo *montaArvore(char *, char *, int, int);
int procura(char *, char);
void posFixa(TNo *);

int main(){		
	TNo *raiz;
	char in[MAX], pre[MAX];
	int n, c;
	
	scanf("%d", &n);
	
	while(n--){
		indPre=0;
		scanf("%d %s %s", &c, pre, in);		
		raiz = montaArvore(pre, in, 0, c-1);
		posFixa(raiz);
		printf("\n");
	}
	
	return 0;
}

TNo *montaArvore(char *pre, char *in, int indAtual, int indFinal){
	TNo *no;
	int indIn;
	
	if(indAtual > indFinal)
		return NULL;
	
	no = (TNo *)malloc(sizeof(TNo));
	no->valor = pre[indPre++];
	no->esq = NULL;
	no->dir = NULL;
	
	if(indAtual == indFinal)
		return no;
	
	indIn = procura(in, no->valor);
	
	no->esq = montaArvore(pre, in, indAtual, indIn - 1);
	no->dir = montaArvore(pre, in, indIn + 1, indFinal);
	return no;
}

int procura(char *str, char valor){
	int i;
	for(i=0; str[i] != '\0'; i++)
		if(str[i] == valor)
			return i;
	return -1;	
}

void posFixa(TNo *r){
	if(r != NULL){
		posFixa(r->esq);		
		posFixa(r->dir);
		printf("%c", r->valor);		
	}
}

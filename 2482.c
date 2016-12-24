#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100
#define LAST 99

typedef struct{char nome[MAX], traducao[MAX];}TPais;

void arrumaString(TPais *);

int main(){	
	
	TPais vetor[MAX];
	int i, j, n;
	
	scanf(" %d ", &n);
	
	for(i=0; i<n; i++){
		fgets(vetor[i].nome, MAX, stdin);
		fgets(vetor[i].traducao, MAX, stdin);
		arrumaString(&vetor[i]);		
	}
	
	scanf(" %d ", &n);
	
	for(i=0; i<n; i++){
		fgets(vetor[LAST].nome, MAX, stdin);
		fgets(vetor[LAST].traducao, MAX, stdin);
		arrumaString(&vetor[LAST]);
		
		for(j=0; strcmp(vetor[j].nome, vetor[LAST].traducao) != 0; j++);		
		printf("%s\n", vetor[LAST].nome);
		printf("%s\n\n", vetor[j].traducao);
	}
	
	return 0;
}

void arrumaString(TPais *p){
	int i;
	
	for(i=0; p->nome[i] >= 32; i++);
	p->nome[i] = '\0';
	for(i=0; p->traducao[i] >= 32; i++);
	p->traducao[i] = '\0';
}

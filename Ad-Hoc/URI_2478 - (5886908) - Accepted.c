#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_NOME 100
#define MAX_LISTA 30
#define LAST 28

typedef struct{char nome[MAX_NOME], escolhas[3][MAX_NOME];}TAmigo;

char Acertou(TAmigo *, int);
void imprimi(TAmigo *, int);

int main(){
	
	int i, j, n;
	TAmigo lista[MAX_LISTA];
	
	scanf("%d ", &n);
	
	for(i=0; i<n; i++){
		scanf("%s", lista[i].nome);
		for(j=0; j<3; j++)
			scanf("%s", lista[i].escolhas[j]);
	}
	
	while(scanf("%s %s", lista[LAST].nome, lista[LAST].escolhas[0]) != EOF){
		if(Acertou(lista, n))
			printf("Uhul! Seu amigo secreto vai adorar o/\n");
		else
			printf("Tente Novamente!\n");
	}
	
	
	return 0;
}

char Acertou(TAmigo *lista, int n){
	int i, j;
	
	for(i=0; i<n && strcmp(lista[i].nome, lista[LAST].nome) != 0; i++);
	
	for(j=0; j<3; j++)
		if(strcmp(lista[i].escolhas[j], lista[LAST].escolhas[0]) == 0)
			return 1;
	return 0;	
}

void imprimi(TAmigo *lista, int n){
	int i, j;
	
	for(i=0; i<n; i++)
	{
		printf("%s", lista[i].nome);
		for(j=0; j<3; j++)
			printf(" %s", lista[i].escolhas[j]);
		printf("\n");
	}
}

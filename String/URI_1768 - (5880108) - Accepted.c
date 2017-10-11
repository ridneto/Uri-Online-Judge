#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void imprimi(int, int, int);
void toco(int);
int main(){ 	
	
	
	int tam;
	
	while(scanf("%d", &tam) == 1){
		imprimi(1, tam, 0);
		toco(tam/2);
	}
	
	return 0;
}

void toco(int tam){
	int i, j;
	
	for(i=0, j = tam; i<j; i++)
		printf(" ");
	printf("*\n");
	for(i=0, j=tam-1; i<j; i++)
		printf(" ");
	printf("***\n\n");
}

void imprimi(int carac, int tam, int desloc){
	int i, j;
	if(carac <= tam){
		for(i=0, j=tam/2-desloc; i<j; i++)
			printf(" ");
		for(i=0; i<carac; i++)
			printf("*");
		printf("\n");
		imprimi(carac + 2, tam, desloc+1);
	}
}

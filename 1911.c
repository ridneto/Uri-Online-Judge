#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ALUNO 51
#define MAX_NOME 23
#define LAST 50

typedef struct{char nome[MAX_NOME], assinatura[MAX_NOME];}TAluno;

int main(){
	
	TAluno vetor[MAX_ALUNO];
	int nAluno, nLista, fraudes, dif, i, j, k;
	
	while(scanf("%d", &nAluno) && nAluno){
		for(i=0; i<nAluno; i++)
			scanf("%s %s", vetor[i].nome, vetor[i].assinatura);
		scanf("%d", &nLista);
		for(i=0, fraudes=0; i<nLista; i++){
			scanf("%s %s", vetor[LAST].nome, vetor[LAST].assinatura);
			for(j=0; j<nAluno && strcmp(vetor[LAST].nome, vetor[j].nome) != 0; j++);
			
			for(k=0, dif=0;vetor[j].assinatura[k] > 32;k++)
				if(vetor[j].assinatura[k] != vetor[LAST].assinatura[k])
					dif++;			
			if(dif > 1)
				fraudes++;
		}
		printf("%d\n", fraudes);
	}
	
	return 0;
}

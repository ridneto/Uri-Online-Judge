#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNO 100
#define MAX_NOME 25

typedef struct{char nome[MAX_NOME];}TAluno;

int compara(const void *, const void *);

int main(){
		
	TAluno Turma[MAX_ALUNO];
	int n, k, i;
	
	scanf("%d %d", &n, &k);
	
	for(i=0; i<n; i++)
		scanf("%s", Turma[i].nome);
	
	qsort(Turma, n, sizeof(TAluno), compara);
	
	printf("%s\n", Turma[k-1].nome);
	
	return 0;
}

int compara(const void *p1, const void *p2){
	TAluno *i = (TAluno *)p1, *j = (TAluno *)p2;
	
	return strcmp(i->nome, j->nome);
}
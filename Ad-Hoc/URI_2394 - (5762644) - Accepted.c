#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 100

typedef struct{int id, tempo;}TAluno;

int compara(const void *, const void *);

int main(){
	
	int i, j, n, m, valor;
	TAluno aluno[MAX];
	
	scanf("%d %d", &n, &m);
	
	for(i=0; i<n; i++)
		for(j=0, aluno[i].id = i, aluno[i].tempo = 0; j<m; j++){
			scanf("%d", &valor);
			aluno[i].tempo += valor;
		}
		
	qsort(aluno, n, sizeof(TAluno), compara);

	printf("%d\n", aluno[0].id + 1);
		
	return 0;
}

int compara(const void *p1, const void *p2){
	TAluno *i = (TAluno *)p1, *j = (TAluno *)p2;
	
	if(i->tempo > j->tempo)
		return 1;
	else
		if(i->tempo < j->tempo)
			return -1;
		else
			return 0;
}
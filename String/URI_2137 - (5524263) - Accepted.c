#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 1000

typedef struct{short int num;}tVetor;
int compara(const void *, const void *);

int main(){
	
	tVetor vetor[MAX];	
	short int i, n;
	while(scanf("%hd", &n) != EOF){
		for(i=0; i<n; i++)
			scanf("%hd", &vetor[i].num);
		qsort(vetor, n, sizeof(tVetor), compara);
		for(i=0; i<n; i++)
			printf("%04hd\n", vetor[i].num);
	}
	
	return 0;
}

int compara(const void *p1, const void *p2){
	tVetor *i = (tVetor *)p1, *j = (tVetor *)p2;
	if(i->num > j->num)
		return 1;
	else
		if(i->num < j->num)
			return -1;
		else
			return 0;
}
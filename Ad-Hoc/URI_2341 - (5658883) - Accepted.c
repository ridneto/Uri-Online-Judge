#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define INFINITO 1000001
#define MAX 1001

int compara(const void *, const void *);

int main(){	
	int i, n, k, aux, vetor[MAX];
	
	scanf("%d %d", &n, &k);
	vetor[0] = INFINITO;	
	for(i=1; i<=k; i++)
		vetor[i] = 0;
	for(i=0; i<n; i++){
		scanf("%d", &aux);
		vetor[aux]++;
	}
	qsort(vetor, k+1, sizeof(int), compara);
	printf("%d\n", vetor[0]);
	
	return 0;
}

int compara(const void *p1, const void *p2){
	int *i = (int *)p1, *j = (int *)p2;
	
	if(*i > *j)
		return 1;
	else
		if(*i == *j)
			return 0;
		else
			return -1;
}
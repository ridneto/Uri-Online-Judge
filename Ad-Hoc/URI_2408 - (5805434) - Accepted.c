#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 3

int compara(const void *, const void *);

int main(){ 	
	
	int i, vetor[MAX];
	
	for(i=0; i<MAX; i++)
		scanf("%d", &vetor[i]);
	
	qsort(vetor, MAX, sizeof(int), compara);	
	
	printf("%d\n", vetor[1]);
	
	return 0;
}

int compara(const void *p1, const void *p2){
	int *i = (int *)p1, *j = (int *)p2;
	
	if(*i > *j)
		return 1;
	else
		return -1;
}
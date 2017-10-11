#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 4
 
int compara(const void *, const void *);
 
int main(){	
	
	int vetor[MAX], i;

	for(i=0; i<MAX; i++)
		scanf("%d", &vetor[i]);
	qsort(vetor, MAX, sizeof(int), compara);
	
	printf("%d\n", abs((vetor[3] + vetor[0]) - (vetor[1] + vetor[2])));
	
	return 0;
}

int compara(const void *p1, const void *p2){
	int *i = (int *)p1, *j = (int *)p2;
	if(*i > *j)
		return 1;
	else
		if(*i < *j)
			return -1;
		else
			return 0;
}

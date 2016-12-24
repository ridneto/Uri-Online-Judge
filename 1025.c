#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 10000

int compara(const void *, const void *);

int main()
{	
	
	int vetor[MAX], n, q, i, key, *pt, v=0, j;
	
	while(scanf("%d %d", &n, &q) && n && q){
		for(i=0;i<n;i++)
			scanf("%d", &vetor[i]);
		qsort(vetor, n, sizeof(int), compara);
		printf("CASE# %d:\n", ++v);
		for(i=0;i<q;i++){
			scanf("%d", &key);
			for(j=0; j<n; j++)
				if(vetor[j] == key)
					break;
			if(j != n)
				printf("%d found at %d\n", key, j+1);
			else
				printf("%d not found\n", key);
		}
	}
	
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
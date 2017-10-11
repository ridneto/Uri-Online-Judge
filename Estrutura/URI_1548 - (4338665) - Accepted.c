#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <time.h>

int notas[1001];

int comp(const void *p1, const void *p2)
{	int *i, *j;
	
	i = (int *)p1;
	j = (int *)p2;

	if(*i > *j)
		return -1;
	else
		if(*i == *j)
			return 0;
		else
			return 1;
}
	
int main (){	
	
	int n, m, i, c, g, iguais, cNotas[1001];
	
	scanf("%d", &n);
	while(n>0){
		scanf("%d", &m);		
		for(c=0;c<m;c++){
			scanf("%d ", &g);
			cNotas[c] = g;
			notas[c] = g;
		}
		qsort(notas, m, sizeof(int), comp);
		for(c=0, iguais = 0;c<m;c++)
			if(cNotas[c] == notas[c])
				iguais++;
		printf("%d\n", iguais);
		n--;
	}
	
	return 0;
}
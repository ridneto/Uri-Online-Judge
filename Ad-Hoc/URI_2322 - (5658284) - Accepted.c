#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 1001

int main(){	
	char vetor[MAX];
	int i, n, q;
	
	scanf("%d", &n);
	memset(vetor, 0, n + 1);
	for(i=0; i<n; i++){
		scanf("%d", &q);
		vetor[q] = 1;
	}
	for(i=1; i<=n; i++)
		if(!vetor[i])
			break;
	printf("%d\n", i);	
	return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int vetor[10], n, c;
	
	for(c=0;c<=9;c++){
		scanf("%d", &n);
		if(n<=0)
			vetor[c] = 1;
		else
			vetor[c] = n;
	}
	for(c=0;c<=9;c++)
		printf("X[%d] = %d\n", c, vetor[c]);
	
	return 0;
}
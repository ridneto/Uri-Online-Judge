#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int vetor[10], c, n;
	scanf("%d", &n);
	vetor[0] = n;
	for(c=1;c<=10;c++)
		vetor[c] = vetor[c-1] * 2;	
	
	for(c=0;c<=9;c++)
		printf("N[%d] = %d\n", c, vetor[c]);
	
	return 0;
}
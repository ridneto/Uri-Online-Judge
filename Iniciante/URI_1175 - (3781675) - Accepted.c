#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int c, vetor[20], ptermo, stermo;
	
	for(c=0;c<=19;c++){
		scanf("%d", &ptermo);
		vetor[c] = ptermo;
	}
	for(c=0;c<=9;c++){
		ptermo = vetor[c];
		stermo = vetor[19-c];
		vetor[c] = stermo;
		vetor[19-c] = ptermo;
	}
	for(c=0;c<=19;c++)
		printf("N[%d] = %d\n", c,vetor[c]);
		
	return 0;
}
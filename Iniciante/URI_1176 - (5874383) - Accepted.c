#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX 61

void defineFib(long long int *);

int main(){
	long long int vetor[MAX];
	int t, i;
	
	defineFib(vetor);
	
	scanf("%d", &t);
	
	while(t--){
		scanf("%d", &i);
		printf("Fib(%d) = %lld\n", i, vetor[i]);
	}
	
	return 0;
}

void defineFib(long long int *vetor){
	int i;
	vetor[0] = 0;
	vetor[1] = 1;
	for(i=2; i<MAX; i++)
		vetor[i] = vetor[i-1] + vetor[i-2];
}

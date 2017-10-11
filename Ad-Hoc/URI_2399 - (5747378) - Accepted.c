#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main(){
	int n, i, vetor[MAX], out;

	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		scanf("%d", &vetor[i]);

	for(i=0; i<n; i++){
		out = 0;
		if(i-1 >= 0)
			out += vetor[i-1];
		if(i+1 < n)
			out += vetor[i+1];
		printf("%d\n", vetor[i] + out);
	}
	
	return 0;
}

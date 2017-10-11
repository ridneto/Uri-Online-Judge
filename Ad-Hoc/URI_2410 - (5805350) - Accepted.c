#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 10000000

int main(){ 	
	
	char vetor[MAX]; 
	int n, i, j, out;
	
	scanf("%d", &n);
	
	memset(vetor, MAX, 0);
	
	for(i=0, out=0; i<n; i++){
		scanf("%d", &j);
		if(!vetor[j]){
			out++;
			vetor[j] = 1;
		}
	}
	
	printf("%d\n", out);
	
	return 0;
}
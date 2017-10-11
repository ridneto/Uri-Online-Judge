#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 10000

int main(){ 	
	
	int vetor[MAX];
	int i, n, tvez, tmaior;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		scanf("%d", &vetor[i]);
	
	for(i=1, tvez=1, tmaior=1; i<n; i++){
		if(vetor[i] == vetor[i-1])
			tvez++;
		else{
			if(tmaior < tvez)
				tmaior = tvez;
			tvez = 1;
		}			
	}
	
	if(tmaior < tvez)
		tmaior = tvez;
	
	printf("%d\n", tmaior);
	
	return 0;
}
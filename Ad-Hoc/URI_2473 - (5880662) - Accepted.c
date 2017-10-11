#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX 6

int main(){
	
	int vetor[MAX], acertos, i, j, e;
	char out[4][8] = {"terno", "quadra", "quina", "sena"};
	for(i=0; i<MAX; i++)
		scanf("%d", &vetor[i]);
	
	for(i=0, acertos=0; i<MAX; i++){
		scanf("%d", &e);
		for(j=0; j<MAX; j++)
			if(vetor[j] == e){
				acertos++;
				break;
			}		
	}
	
	if(acertos < 3)
		printf("azar\n");
	else
		printf("%s\n", out[acertos-3]);
	return 0;
}
